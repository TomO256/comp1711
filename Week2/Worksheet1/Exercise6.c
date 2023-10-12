#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter a number to check whether it is odd or even\n");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}