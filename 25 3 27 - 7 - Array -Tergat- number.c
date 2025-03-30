#include<stdio.h>
int main()
{
    int i,num[5]={10,20,30,40,50};
    int ter=110;

    for(i=0;i<5;i++)
    {
        if(ter==num[i])
           {
               printf("The number has found %d\n",num[i]);
               break;
           }
           else
            printf("There has no");
           break;


    }





    getch();
}
