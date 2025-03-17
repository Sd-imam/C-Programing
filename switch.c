#include<stdio.h>
int main()
{
    int digit;
    printf("Enter any digit: ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("Zero");
        break;
          case 1:
        printf("one");
        break;
          case 2:
        printf("two");
        break;
          case 3:
        printf("three");
        break;
          case 4:
        printf("four");
        break;
          case 5:
        printf("five");
        break;
          default:
            printf("There is no digite");


    }


    getch();
}
