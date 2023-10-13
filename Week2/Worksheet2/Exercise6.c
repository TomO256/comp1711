#include <stdio.h>
int main(){
    int array1[3]={5,25,2}, array2[3]={5,16,1},i,array3[6];
    int lenArray1=(sizeof(array1)/sizeof(array1[0]))-1, lenArray2=(sizeof(array2)/sizeof(array2[0]))-1;
    for (i=0;i<=lenArray1;i++){
        array3[i]=array1[i];
    }
    for (i=lenArray1+1;i<=lenArray1+lenArray2+1;i++){
        array3[i]=array2[i-(lenArray1+1)];
    }
    for (i=0;i<=lenArray1+lenArray2+1;i++){
        printf("%d\n",array3[i]);
    }
    return 0;
}