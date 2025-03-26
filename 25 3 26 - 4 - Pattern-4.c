/*
123
*12
**1
*/
#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter any number : ");
    scanf("%d",&num);

    for(row=num;row>=1;row--)
    {
             for(col=1;col<=num-row;col++)
        {
            printf(" ",col);
        }

        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }



    getch();
}
