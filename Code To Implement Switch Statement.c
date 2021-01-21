/* C Code To Implement Switch Statement */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    printf("Please Select A Number 1 Or 2 : ");
    scanf("d",&i);
    switch(i)
    {
    case 1:
        printf("I Am In Heaven !!!");
        break;
    case 2:
        printf("I Am In Hell !!!");
        break;
    default:
        printf("I Am Still On Earth !!!");
    }
}
