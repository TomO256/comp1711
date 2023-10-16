#include <stdio.h>
int main(){
    int score;
    printf("Please enter the student's score\n");
    scanf("%d",&score);
    if (score>0 && score<100){
        if (score>=70){
            printf("The student achieved a distinction\n");
        }else if (score>=50){
            printf("The student passed\n");
        }else{
            printf("The student failed\n");
        }
    }else{
        printf("Please enter a valid value\n");
    }
    return 0;
}