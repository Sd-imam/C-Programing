#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter the Length: ");
    scanf("%f",&length);

    printf("Enter the width: ");
    scanf("%f",&width);

    area=length*width;

    printf("The area: %f\n",area);


    getch();
}
