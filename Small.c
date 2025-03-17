#include<stdio.h>
int main()
{
char ch;
printf("Enter any lettter: ");
scanf("%c",&ch);

if(ch>='a' && ch<='z')
    printf("Small letter ");

else if(ch>='A' && ch<='Z')
    printf("Capital letter ");
else
    printf("not a letter");

    getch();
}
