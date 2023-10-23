#include <stdio.h>
#include "utils.h"

int main()
{
    int max,i; 
    char *filename = "squares.dat";
    FILE *file= fopen(filename,"w+");
    fclose(file);
    printf("Please enter the maximum number");
    scanf("%d",&max);
    for (i=1;i<=max;i++)
    {
        FILE *file= fopen(filename,"a");
        fprintf(file,"%d\n",i*i);
        fclose(file);
    }
    return 0;
}