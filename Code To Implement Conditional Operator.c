/* C Code To Implement Conditional Operator */
/* The Following Code Demonstrate The Greatest */
/* Of Two Values Entered Through Keyboard. */

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  
  printf("Please Enter The First Number : ");
  scanf("%d",&a);
  
  printf("Please Enter The Second Number : ");
  scanf("%d",&b);
  
  (a>b)?printf("Your First Number - %d Is Greater!!!",a):printf("Your Second Number - %d Is Greater!!!",b);
  /* This is the conditional operator. */
  /* (if this condition is satisfied)__?__(then print this)__:__(otherwise print this) */
  
}
