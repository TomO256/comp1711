#include <stdio.h>
int main(){
    int total, numbers[10],i;
    float mean;
    for (i=0;i<10;i++)
    {
        printf("Enter a number");
        scanf("%d",numbers[i]);
        total+=numbers[i];
    }
    mean=total/10;
    printf("The mean of the numbers is: %.3f",mean);
}