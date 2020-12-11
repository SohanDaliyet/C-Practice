/* Code To Implement Else If Ladder Statement */
/* The Following Code Find The Greatest Of Two */
/* Numbers Entered Through Keyboard */

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;    
    printf("Please Enter A Value For The First Number : ");
    scanf("%d",&a);
    printf("Please Enter A Value For The Second Number : ");
    scanf("%d",&b);
    if(a==b){
        printf("Both The First And Second Number Are Equal !!!");
    }
    else if(a>b){
        printf("Your First Number - %d Is Greater!!!\n",a);
    }
    else if(a<b){
        printf("Your Second Number - %d Is Greater!!!\n",b);
    }
}
