#include<stdio.h>
#include<string.h>

int main(void)
{
    char* s[100] = {0};
    char* p = s;//p is point,which point to s(point struct)
    char input = {0};
    int i = 0;
    int j = 0;
    
    gets(s);//can not enter
    scanf("%c", &input);//get char scanf end flag is EOF &  
    while (p[i] != '\0')
    {
        if (tolower(p[i]) == tolower(input))//tolower is make to little abc
        {
            j++;
        }
        i++;
    }
    printf("%d", j);
    return 0;
}
