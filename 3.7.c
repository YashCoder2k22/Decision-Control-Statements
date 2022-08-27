#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c>=0)
    { 
        if(b*b-4*a*c==0)
        {
            printf("Real and Equal Roots");
    }
    else
    {
        printf("Real and Distinct Roots");
    }
    }
    else{
        printf("Imaginary and Distinct Roots");
    }
    return 0;


}