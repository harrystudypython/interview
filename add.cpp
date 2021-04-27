#include<stdio.h>
char *strcat(char*pc1,char*pc2)
{
    char * p = pc1;   //*p的作用:把*pc1的地址传递给*pc2

    while(*p!='\0') 
        p++;                //此时p指向*pc1的最后一个字符的地址 
    while(*pc2!='\0') 
        *p++ = *pc2++;   //从*pc1最后一个字符开始，把*pc2的值赋给*p 
    return( pc1 );    //*pc1最后一个字符之后的地址储存*pc2第一个元素，直到'\0' 
}
int main()
{
    char pc1[20]="柯 纯,miss you!";
    char pc2[20]="Good Afternoon ";
    printf("%s\n",strcat(pc2,pc1));
    return 0;
}
