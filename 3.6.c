#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Numbers");
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        printf("Greater Number is %d",a);
    }
    else
    {
        printf("Greater Number is %d",b);
    }
        return 0;

    }
