
#include<stdio.h>
int main()
{
    int num,rem,count=0;
    printf("Enter any number : ");
    scanf("%d",&num);

    int temp=num;


    while(temp!=0)
    {

        temp=temp/10;
        count++;
    }
    printf("%d\n",count);



    getch();
}
