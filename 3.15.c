#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    if(x>=0)
    {
        if(x==0)
        {
         printf("Number is Zero");
        }
        else
        {
            printf("Number is Positive");
        }
    }
    else
    {
        printf("Number is Negative");
    }
    return 0;
}