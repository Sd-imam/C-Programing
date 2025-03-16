#include<stdio.h>
int main()
{
    float a,b,c,s,area;

    printf("Enter the three number:");
    scanf("%f %f %f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area is :%f\n",area);


    getchar();
}
