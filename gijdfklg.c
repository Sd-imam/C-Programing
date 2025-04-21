#include<stdio.h>
int main()
{
    char str1[30]="SD Imam Shimul";
    char str2[30]="India";
    char tem[30];

    printf("Before swapping :\n");
    printf(" String 1 : %s\n",str1);
       printf(" String 2 : %s\n",str2);

    strcpy(tem,str1);
    strcpy(str1,str2);
    strcpy(str2,tem);

        printf("\n\n After  swapping : \n");
    printf(" String 1 : %s\n",str1);
       printf(" String 2 : %s\n",str2);


    return 0;
}

