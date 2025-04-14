#include<stdio.h>
int main()
{
    int i,j,c1,c2,r1,r2;

    int a[10][10],b[10][10],c[10][10];

    printf("Enter row and collome for first Matrix: ");
    scanf("%d %d",&r1,&c1);
        printf("Enter row and collome for second Matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\nIt is error and try again\n");

    printf("Enter row and collome for first Matrix: ");
    scanf("%d %d",&r1,&c1);
        printf("Enter row and collome for second Matrix: ");
    scanf("%d %d",&r2,&c2);
    }

    printf("Enter elements for first Matrix: \n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf(" A [%d] [%d] :  ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // for b
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf(" B [%d] [%d] :  ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("The A :");

           for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }

      printf("The B: ");

           for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf(" %d ",b[i][j]);

        }
        printf("\n");
    }

    getch();
}
