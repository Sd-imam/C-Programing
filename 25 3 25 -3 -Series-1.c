#include<stdio.h>
int main()
{
    int sum=0,i,num;
    printf("Enter any number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i=i+1)
    {

        sum=sum+i;
    }
        printf("1 + 2 + 3 .......+ %d =  ",num);
    printf("%d",sum);


    getch();
}
