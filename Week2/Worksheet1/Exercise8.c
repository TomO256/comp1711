#include <stdio.h>
#include <math.h>
int main(){
    int number;
    int total =1;
    printf("Enter a number to calculate the factorial of\n");
    scanf("%d",&number);
    for (int i = 1; i<=number; i++)
    {
        total = total * i;
    }
    printf("The total is %d\n",total);
    return 0;
}