#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        printf("Greater Number is %d",a);
    }
    if(b>=c&&b>=a)
    {
        printf("Greater Number is %d",b);
    }
    else
    {
        printf("Greater Number is %d",c);
    }
     return 0;
}