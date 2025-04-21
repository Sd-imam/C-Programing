#include<stdio.h>
int main()
{
    char str1[]="SD Imam Shimul";
    char str2[]="Shimul";

    int d= strcmp(str1,str2);

    if(d==0)
    {
        printf("String are equal \n");
    }
    else
    {
        printf("String are not equal ");
    }






    getch();
}
