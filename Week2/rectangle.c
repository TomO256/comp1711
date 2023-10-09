#include <stdio.h>
int main()
{
    float length;
    float width;
    printf("Enter the length\n");
    scanf("%f", &length);
    printf("Enter the width\n");
    scanf("%f", &width);
    float total;
    total = length * width;
    printf("The area of rectangle with length %.3f and width %.3f is %.3f", length, width, total);
    return 0;
}