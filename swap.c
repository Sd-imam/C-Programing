#include<stdio.h>
int main()
{
    int temp,num1=10,num2=20;

    temp=num1;
    num1=num2;
    num2=temp;

    printf("The num1= %d\n",num1);
    printf("The num2=%d\n",num2);


    getch();
}
