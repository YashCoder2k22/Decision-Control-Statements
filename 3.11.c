#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of 5 subjects of a candidate");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1+m2+m3+m4+m5>=33)
    {
        printf("Candidate is Passed");
    }
    else
    {
        printf("Candidate is Fail");
    }
    return 0;
}