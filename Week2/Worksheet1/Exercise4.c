#include <stdio.h>
#include <math.h>
int main()
{
    float pi = asin(1) * 2;
    float area;
    float radius;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of circle with radius %g is %g\n", radius, area);
    return 0;
}