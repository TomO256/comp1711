#include <stdio.h>
#include <math.h>
float circleArea(float radius)
{
    float area;
    float pi = acos(-1);
    area = pi * radius * radius;
    return area;
}
int main()
{
    float radius, area;
    printf("Enter the radius of the circle to find the area\n");
    scanf("%f",&radius);
    area=circleArea(radius);
    printf("The area of the circle is %.3f",area);
    return 0;
}