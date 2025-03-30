#include<stdio.h>
int main()
{
    int num[5]={10,20,30,40,50};

    int max=num[0];
      int min=num[0];

    for(int i=0;i<5;i++)
    {
        printf("%d   ",num[i]);

        if(max<num[i])
        {
            max=num[i];
        }

    }
    //**
        for(int i=0;i<5;i++)
    {


        if(min>num[i])
        {
            min=num[i];
        }

    }


         printf("\n \n The maximum number is %d\t\n",max);
               printf("\n \n The minum number is %d\t\n",min);


    getch();
}
