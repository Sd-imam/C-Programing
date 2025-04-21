
#include<stdio.h>
int main()
{
    char str1[100]="My name is : ";
    char str2[]=" SD Imam Shimul ";

    int i=0,len=0,j=0;

    while(str1[i]!='\0')
    {
    i++;
    len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

    printf("  The first : %s\n ",str1);



    getch();
}
