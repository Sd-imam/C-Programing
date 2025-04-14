#include<stdio.h>
int main()
{
    int i,j,row,col;
    int a[10][10];
    int b[10][10];
    int c[10][10];

    printf("Enter input for row and colome : ");
    scanf("%d %d",&row,&col);

    printf("For A : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" A [ %d ][%d]  :  ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

       printf("For B : \n");
      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" B [ %d ][%d]  :  ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf(" A= ");
         for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }
//for b
printf("\n");
    printf(" B= ");
         for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf(" %d ",b[i][j]);

        }
        printf("\n");
    }
    // for c
    printf("\n");

         for(i=0;i<row;i++)
    {

        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
    printf("\n");
    }
    //c
    printf("\n");
    printf(" C= ");
         for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf(" %d ",c[i][j]);

        }
        printf("\n");
    }

    getch();
}
