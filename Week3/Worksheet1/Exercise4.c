#include <stdio.h>
int main()
{
    int temperature;
    printf("Enter a temperature\n");
    scanf("%d",&temperature);
    if (temperature < -10 || temperature > 40)
    {
        printf("The temperature is not within the range\n");
    }
    else
    {
        printf("The temperature is within the range\n");
    }
    return 0;
}