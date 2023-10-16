#include <stdio.h>
int main(){
    int value =0;
    while (value!=-1){
        printf("Enter a value, or -1 to quit\n");
        scanf("%d",&value);
        if (value==-1){
            printf("This is the termination value\n");
        }else if (value>=0 && value <= 100){
            printf("This value is in the range 0-100\n");
        }else{
            printf("The value is not in the range 0-100\n");
        }
    }
    return 0;
}