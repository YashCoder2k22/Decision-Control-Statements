#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Non - Positive");
    }
    return 0;
}