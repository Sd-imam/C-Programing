#include<stdio.h>
int main()
{

    int num,sum=0,rem,tem;
    printf("Enter any number: ");
    scanf("%d",&num);

    tem=num;
    while(tem!=0)
    {
        rem=tem%10;
        sum=sum+rem;
        tem=tem/10;
    }
printf("The sum of Digit: %d\n",sum);


    getch();
}
