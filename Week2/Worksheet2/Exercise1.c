#include <stdio.h>
int main(){
    int a[5], i, total =0;
    a[0]=10, a[1]=11, a[2]=98, a[3]=111, a[4]=9078;
    for (i=0;i<=4;i++){
        total+=a[i];
    }
    printf("The total is %d\n",total);
}