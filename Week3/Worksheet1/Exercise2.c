#include <stdio.h>
int main(){
    int number;
    printf("Enter a number to check if it is divisible by 4 and 5\n");
    scanf("%d",&number);
    if (number%4==0 && number%5==0){
        printf("Divisible by 4 and 5\n");
    }else{
        printf("Not divisible by 4 and 5\n");
    }
    return 0;
}