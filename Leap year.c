#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);

    if(year%400==0)
        printf("The year is leap year");
    else if (year%4==0 && year%100!=0)
    printf("The year is leap yeaR");

    else
        printf("the year is not leap year");



    getch();
}
