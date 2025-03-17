#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the centigrade: ");
    scanf("%f",&c);

    //c/5=f-32/9
    /*
    f=c*1.8)+32;
    */
    f=(c*1.8)+32;

    printf("Farinhide: %f\n",f);


    getch();


}
