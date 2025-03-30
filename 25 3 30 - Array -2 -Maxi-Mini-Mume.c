
#include<stdio.h>
int main()
{
    int max,i,min;

    int num[5]={10,20,30,40,50};

    max=num[0];

    for(i=0;i<5;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    printf(" The maxinum number: %d\n",max);

    min=num[0];

        for(i=0;i<5;i++)
    {
        if(min>num[i])
        {
            min=num[i];
        }
    }
    printf(" The maxinum number: %d\n",min);

    getch();
}
