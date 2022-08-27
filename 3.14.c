#include<stdio.h>
int main()
{
    int x,rem,result;
    printf("Enter a Number");
    scanf("%d",&x);
    if(x%3==0||x%7==0)
    {
        printf("Number is divisble by 3 or 7");
    }
    else
    {
        printf("Number is Not divisible by 3 or 7");
    }
    return 0;
}