/* C Code To Convert Fahrenheit To Celsius */

#include<stdio.h>
#include<math.h>

void main()
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit: ");

    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32)*5/9;

    printf("Celsius: %f \n", celsius);
}
