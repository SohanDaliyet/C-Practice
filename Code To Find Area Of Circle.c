/* C Code To Find Area Of Circle */

#include <stdio.h>
#include <math.h>

void main()
{
  float radius, area;

  printf("Enter the radius of a circle : ");

  scanf("%f", &radius);

  area = 3.14159*radius*radius;

  printf("Area of the circle = %f",area);

}
