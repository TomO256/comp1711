#include <stdio.h>
int main(){
    int array[6]={55,55,12,66,55,12}, i, a,duplicates[6],b,flag;
    for (i=0;i<=5;i++){
        for (a=0;a<=5;a++){
            if (a!=i){
                flag=1;
                for (b=0;b<=5;b++){
                    if (array[i]==duplicates[b]){
                        flag=0;
                    }
                }
                if ((array[i]==array[a])&&(flag==1)){
                    printf("%d is a duplicate\n",array[i]);
                    duplicates[i]=array[i];
                }
            }
        }
    }
    return 0;
}