#include<stdio.h>
int  main()
{
    int num,col,row;
    printf("Enter any number: ");
    scanf("%d",&num);


    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }

        for(row=num-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }



    getch();
}
