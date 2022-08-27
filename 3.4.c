#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    if(x&1==1)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is even");
    }
    return 0;
}