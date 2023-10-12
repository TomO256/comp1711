#include <stdio.h>
#include <math.h>
int main(){
    float time,intrest,capital;
    printf("What is the intial money in the bank?\n");
    scanf("%f",&capital);
    printf("What is the intrest rate\n");
    scanf("%f",&intrest);
    printf("How many years left in for?");
    scanf("%f",&time);
    intrest = (intrest + 100)/100;
    float money = capital * pow(intrest,time);
    printf("The total money after %.1f years is %.2f",time,money);
    return 0;

}