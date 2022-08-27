#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
    {
        printf("Lowercase");
    }
    else if (ch>=65&&ch<=90)
    {
        printf("Uppercase");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}