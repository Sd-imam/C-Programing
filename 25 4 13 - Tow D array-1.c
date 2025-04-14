#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4]={  {12,12,52,63} , {70,50,60,89} , {10,52,85,79} };

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++){
            printf(" %d ",A[i][j]);
        }
            printf("\n");
    }



    getch();
}
