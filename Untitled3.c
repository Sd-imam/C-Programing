#include<stdio.h>
int main()
{
    int first=0,secound=1,count=0,num ,fabu;

    printf("Enter any last number: ");
    scanf("%d",&num);

    while(count<num)
    {
        if(count<=1)
        {
            fabu=count;
        }
        else
        {
            fabu=first+secound;
            first=secound;
            secound=fabu;
         ;
        }
            printf(" %d " ,fabu);
            count++;
    }
   // printf(" %d ")



    getch();
}
