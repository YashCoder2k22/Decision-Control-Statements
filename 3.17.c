#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}