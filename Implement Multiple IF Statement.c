/* C Code To Implement Multiple IF Statement */
#include<stdio.h>
#include<conio.h>

void main()
{
    float p;
    printf("\n Enter The Percentage Of The Student : ");
    scanf("%f",&p);
    if(p<40){
        printf("The Student Has Failed!!!");
    }
    if(p>=40&&p<50){
        printf("The Student Is Passed With C Grade!!!");
    }
    if(p>=50&&p<60){
        printf("The Student Is Passed With B Grade!!!");
    }
    if(p>=50&&p<60){
        printf("The Student Is Passed With B Grade!!!");
    }
    if(p>=75&&p<100){
        printf("The Student Is Passed With S Grade!!!");
    }
    if(p>100||p<0){
        printf("\aInvalid Input!!!");
    }
    if(p>100||p<0){
        printf("\a Invalid Input!!!");
    }
}
