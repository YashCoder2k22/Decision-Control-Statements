#include<stdio.h>
int main()
{
    float cp,sp,result;
    printf("Enter the Cost Price and Selling Price of Product");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        result=((sp-cp)/cp)*100;
        printf("Profit Percentage is %f%%",result);
    }
    else
    {
        result=((cp-sp)/cp)*100;
        printf("Loss Percentage is %f%%",result);
    }
    return 0;
}