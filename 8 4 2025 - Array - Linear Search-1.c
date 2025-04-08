#include<stdio.h>
int main()
{
    // int [4]=1,2,3,6,4,8


    int a,i;
    int num[6]={1,2,3,4,5,6};

    printf("Enter any number to find: ");
    scanf("%d",&a);

    for(i=0;i<6;i++)
    {
        if(a==num[i])
        {


            printf("The number is found: %d  The position is %d\n ",a,i+1);
            break;
        }
               else
    {
        printf("The number is not found\n");
    }
    }



    getch();
}
