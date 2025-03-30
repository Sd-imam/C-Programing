#include<stdio.h>
int main()
{
    int i,num,a[30];

    printf("Enter any number: ");
    scanf("%d",&num);
    a[0]=0;
    a[1]=1;

    for(i=2;i<num;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<num;i++)
    {
        printf("   %d  ",a[i]);
    }







    getch();
}
