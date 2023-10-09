#include <stdio.h>
int main(){
    int num1,num2,total;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    total = num1+num2;
    printf("The total of %d and %d is %d",num1,num2,total);
}