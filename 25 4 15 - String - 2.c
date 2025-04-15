#include<stdio.h>
int main()
{
    char s1[]="SD Imam Shimul";

    int i=0;
    while(s1[i]!='\0')
    {
        printf(" %c \n",s1[i]);
        i++;
    }
    printf("The total number :  %d ",i);


    getch();
}
