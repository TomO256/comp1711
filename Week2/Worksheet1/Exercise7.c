#include <stdio.h>
#include <math.h>
int main(){
    float temp;
    printf("Enter temperature in Farenheit to convert to Celcius\n");
    scanf("%f",&temp);
    temp = (temp-32) /1.8;
    printf("The temperature in Farenheit is: %.3f\n",temp);
    return 0;
}