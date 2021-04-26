#include<stdio.h>
#include<stdlib.h>
int main()
{
int*s1,*s2,m;
s1=s2=(int*) malloc (sizeof(int));
*s1=15;
*s2=20;
m=*s1+*s2;
printf("%d\n",m);
}
 
