#include<stdio.h>
int main()
{
    int num,sum=0,i;
    // 12364...
    int mark[100];

     printf("Enter any number: ");
     scanf("%d",&num);

     printf("Please %d the number:\n ",num);

     for(i=0;i<num;i++)
     {
         scanf("%d",&mark[i]);
    // sum=sum+mark[i];
     }
    for(i=0;i<num;i++){
            sum=sum+mark[i];

     }
        printf("The sum is : %d\n",sum);


    return 0;
}
