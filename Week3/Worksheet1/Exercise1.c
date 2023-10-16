#include <stdio.h>
int main(){
    printf("Please enter a number\n");
    int number;
    scanf("%d",&number);
    if (number>0){
        printf("The number is positive\n");
    }else if (number<0){
        printf("The number is negative\n");
    }else if (number==0){
        printf("The number is zero\n");
    }else{
        printf("Invalid value\n");
    }
    return 0;
}