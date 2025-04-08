#include<stdio.h>
int main()
{
    int array1[30],array2[30],i,num;

    printf("Enter any number that you want to see: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        scanf("%d",&array1[i]);

    }
    printf("Array1:  ");
    for(i=1;i<=num;i++)
    {
        printf(" %d ",array1[i]);
    }
    printf("\n Array2 : ");
    for(i=1;i<=num;i++)
    {
        array2[i]=array1[i];
    }
        for(i=1;i<=num;i++)
    {
   printf("  %d ",array2[i]);
    }



    getch();
}
