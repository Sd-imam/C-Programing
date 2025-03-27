#include<stdio.h>
int main()
{
    int num,col,row;

    printf( "Enter any number: ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num;col++)
        {
            if(col==row || row+col==num+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }



    getch();
}
