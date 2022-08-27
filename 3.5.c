#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    if(x>=100&&x<=999)
    {
        printf("3 Digit Number");
    }
    else
    {
        printf("Not a 3 Digit Number");
    }
    return 0;
}