#include<stdio.h>
int main()
{
    int num,row,col;

    printf("Enter any number : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num;col++)
        {
            if(col==1 || col==num || row==1 || row==num)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }



    getch();
}
