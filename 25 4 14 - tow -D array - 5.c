
#include<stdio.h>
int main()
{
    int i,j,row,col;
    int a[10][10];
    int transpose[10][10];

    printf("Enter the row and  colome: ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" A [ %d ][ %d ] ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // printe
    printf(" A= " );
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("  %d  ",a[i][j]);

        }
        printf("\n");
    }
  for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        transpose[j][i]=a[i][j];
        }
        printf("\n");
    }
        //t
            printf("Transpose:" );
    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
            printf(" %d ",transpose[i][j]);

        }
        printf("\n");
    }
    getch();
    }



