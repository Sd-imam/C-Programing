#include<stdio.h>
int  main()
{
    int i,j,sum=0;
    int a[3][3];

    printf("Enter the element for the martix:  \n");
    for(i=0;i<3;i++)
    {
        for(j=1;j<3;j++)
        {
            printf("A [ %d ] [ %d ] : ",i,j);
            scanf("%d",&a[i][j]);
        }
            printf("\n");
    }

    printf("The matrix: \n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf(" The sum is : %d ",sum);


    getch();
}
