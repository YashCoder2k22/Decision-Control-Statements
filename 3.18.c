#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number of Month");
    scanf("%d",&x);
    if(x==4||x==6)
    {
        printf("30 Days");
    }
    else if (x==9||x==11)
    {
        printf("30 Days");
    }
    else if(x==2)
    {
        printf("28 Days");
    }
    else
    {
        printf("31 Days");
    }
    return 0;
}