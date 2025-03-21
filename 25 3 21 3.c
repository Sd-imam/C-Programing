#include<stdio.h>
int main()
{

    /*
    3x1=3
    3x2=6
    */
    int num ,i;
    printf("Enter any number: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf("%d  x  %d = %d\n",num,i,num*i);
    }


    getch();
}
