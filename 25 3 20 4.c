#include<stdio.h>
int main()

{
    double num1,num2;
    char oper;

    printf("Enter two number: ");
    scanf("%lf %lf",&num1,&num2);

    printf("Enter any operator:  ( +, -  ,*  ,  / ) \n");
    scanf(" %c", &oper);

    switch(oper)
    {
    case '+' :
        {


        printf("%lf + %lf = %lf ",num1,num2,num1+num2 );
        break;}

        case '-':{
        printf("%lf - %lf = %lf ",num1,num2,num1-num2 );
        break;}

        case '*' :{
        printf("%lf * %lf = %lf ",num1,num2,num1*num2 );
        break;}

        case '/' :{
        printf("%lf / %lf = %lf ",num1,num2,num1/num2 );
        break;}

        default:{
            printf("Not a operater");

        }
    }



    getch();
}
