/* C Code To Calculate Simple Interest */
#include<stdio.h>
#include<conio.h>

void main()
{
    float amount,rate,time,interest;
    printf("Enter Principle Amount : ");
    scanf("%f",&amount);
    printf("Enter The Interest Rate : ");
    scanf("%f",&rate);
    printf("Enter Time In Year : ");
    scanf("%f",&time);
    interest=amount*time*rate/100;
    printf("The Simple Interest Is %f",interest);
}
