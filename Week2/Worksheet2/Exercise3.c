#include <stdio.h>
int main(){
    int integerArray[5]={45,72,11,62435,123};
    int max=-1000000000, i;
    for (i=0;i<=4;i++){
        if (integerArray[i]>max){
            max=integerArray[i];
        }
    }
    printf("The maximum value is %d\n",max);
}