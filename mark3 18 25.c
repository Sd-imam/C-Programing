#include<stdio.h>
int main()
{
int mark;
printf("Enter any number: ");
scanf("%d",&mark);

if(mark>100 ||  mark<0)
{
    printf("invalide number");
}
    else if (mark>=80 && mark<=100)
    {

        printf("A+");}
    else if (mark>=70 && mark<=79)
      {

       printf("A-");}
        else if (mark>=60 && mark<=69){
        printf("B+");}
            else if (mark>=50 && mark<=59){
        printf("B-");}
        else {
            printf("WORNLK");}

    getch();
}
