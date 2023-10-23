#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main()
{
    int buffer_size=100,total=0,count=0;
    float mean;
    char *filename = "squares.dat";
    FILE *file=fopen(filename,"r");
    char line[buffer_size];
    while (fgets(line,buffer_size,file)!=NULL)
    {
        total+=atoi(line);;
        count++;
    }
    mean = total/count;
    printf("The mean is: %.3f\n",mean);
    return 0;
}