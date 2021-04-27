#include<stdio.h>
#include<string.h>

int main(void)
{
    char* s[100] = {0};//s是一个字符指针数组，包含100个char类型的指针。同时还有指针数组的初始化。
    char* p = s;//p是指向指针数组的指针
    char input = {0};//定义一个字符变量，并初始化
    int i = 0;
    int j = 0;
    
    gets(s);//这个是获取一行所有的字符，在遇到换行符后返回所有的字符。
    scanf("%c", &input);//获取一个字符，注意scanf获取的停止标志是EOF///这里犯了错，字符应该是%c而不是%d，除了字符串都要&
    
    while (p[i] != '\0')
    {
        if (tolower(p[i]) == tolower(input))//tolower是将字母转换为小写字母的函数
        {
            j++;
        }
        i++;
    }
    printf("%d", j);
    return 0;
}