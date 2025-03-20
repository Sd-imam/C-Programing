#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter any two number: ");
    scanf("%d %d",&num1,&num2);

    large= (num1>num2) ? num1:num2;

    printf("The large number: %d\n",large);



    getch();
}
