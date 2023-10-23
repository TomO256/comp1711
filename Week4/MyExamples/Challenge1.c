#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int nums,i,total=0,numlines;
    char *string;
    //float mean;
    char* filename="MyFile.txt";
    printf("How many strings do you want to enter?");
    scanf("%d",&nums);
    for (i=0; i<nums; i++)
    {
        printf("Enter a string");
        scanf("%s",string);
        numlines = atoi(string);
        FILE *file = fopen(filename,"a");
        fprintf(file,"%s\n",string);
        fclose(file);
    }
    /*mean=total/nums;
    FILE *file = fopen(filename,"a");
    fprintf(file,"%.3f",mean);
    fclose(file);*/
}