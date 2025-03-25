#include<stdio.h>
int main()
{
    double i,num,sum=0;

    printf("Enter any number: ");
    scanf("%lf",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+(1/i);
        if(i==1)
            printf("1 +");
        else if(i==num)
            printf("1/%.lf",i);
        else
            printf(" 1/%.lf  +",i);
    }
    printf("\n sum is %.3lf \n",sum);


    getch();
}
