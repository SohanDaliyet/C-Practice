/*C Code To Implement Nested IF ELSE*/
/*If The Values For 'a','b','c' Are Entered*/
/*Through The Keyboard Then Write A*/
/*Program To Find The Smallest Of Them .*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,s;
    printf("Please Enter A Value For The First Number : ");
    scanf("%d",&a);
    printf("Please Enter A Value For The Second Number : ");
    scanf("%d",&b);
    printf("Please Enter A Value For The Third Number : ");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            s=a;
        }
        else{
            s=c;
        }
    }
/* Here we are comparing if 'a' is the smallest or is 'c' the smallest. */    
    

    else{
        if(a<c){
            s=b;
        }
        else{
            s=c;
        }
    }
/*Here we are comparing if 'b' is the smallest or is 'c' the smallest. */    
    
}
