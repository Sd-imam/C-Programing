
#include<stdio.h>
int main()

{
    int num,col,row;

    printf("Enter any row: ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d" ,col);
        }
        for(col=row-1;col>=1;col--)
        {
            printf("%d",col);
        }


        printf(" \t\n");
    }
//NEW

       for(row=num-1;row>=1;row--)
    {
        for(col=1;col<=num-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d" ,col);
        }
        for(col=row-1;col>=1;col--)
        {
            printf("%d",col);
        }


        printf(" \t\n");
    }



    getch();
}
