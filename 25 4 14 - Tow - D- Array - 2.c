#include<stdio.h>
int main()
{
    int i,j;

    int a[3][4];
    int b[3][4];


    // for A
    printf("Enter the input for A matric: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" A [ %d ][ %d ] :  ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf(" A = ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    // A END

    // for B
    printf("Enter the input for B matric: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" B [ %d ][ %d ] :  ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf(" B = ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }


    getch();
}
