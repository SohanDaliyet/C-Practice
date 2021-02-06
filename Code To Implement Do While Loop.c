/* C Code To Implement Do While Loop */

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,x;
    x = 1;

    do{
        printf("enter any two values : ");
        scanf("%d%d",&a,&b);
        a=a=b;
        printf("The Addition Of Two Numbers Is %d ",a);
        x++;
    }while(x<=5);


}
