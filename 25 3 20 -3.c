#include<stdio.h>
int main()
{
    int choise;
    float tem,convertTemp;


    printf("Temperature conviter: \n");
    printf("'1. Farinhaid to Celcioius.\n");
    printf("2. Celcious to Farinhaid: \n");

    scanf("%d",&choise);

    switch(choise)
    {
    case 1:
        printf("Enter  the forinhaid Tempeture: ");
        scanf("%f",&tem);
        convertTemp=(tem-32)/1.8;
        printf("The celcious temperature: %lf",convertTemp);
        break;

            case 2:
        printf("Enter  Celcioius Tempeture: ");
        scanf("%f",&tem);
        convertTemp=(tem*1.8)/32;
        printf("The celcious temperature: %lf",convertTemp);
        break;

            default:
                printf("not a correct");
    }




    getch();
}
