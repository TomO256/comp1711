#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps)
{
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);

    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL)
    {
        strcpy(date, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(time, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(steps, token);
    }

    // Free the duplicated string
    free(inputCopy);
}

int countTotal(char *filename)
{
    int buffer_size = 1000;
    char line_buffer[buffer_size];
    FILE *file = fopen(filename, "r");
    int count = 0;
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        count++;
    }
    fclose(file);
    return count;
}
int compare(const void* a, const void* b)
{
    return ((const FitnessData *)b)->steps - ((const FitnessData *)a)->steps;
    /*int c = *(const int *)a;
    int d = *(const int *)b;
    return (a-b);*/
}
int main() {
    FitnessData array[200];
    char filename[100];
    printf("Enter Filename:\n");
    scanf("%s",filename);
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        printf("Error: File could not be opened\n");
        return 1;
    }
    int buffer_size = 1000;
    char line[buffer_size];
    char new_buffer[buffer_size];
    int noRecords = countTotal(filename);
    char steps[10];
    for (int i = 0; i < noRecords; i++)
    {
        fgets(new_buffer, buffer_size, file);
        tokeniseRecord(new_buffer, ",", array[i].date, array[i].time, steps);
        int stepCount = strlen(steps);
        int dateCount=strlen(array[i].date);
        int timeCount=strlen(array[i].time);
        if ((strlen(array[i].date)!=10) || (strlen(array[i].time)!=5) || (strlen(steps)>5) || ((strlen(steps)) != 5 && strlen(steps) != 4 && stepCount !=3)){
            printf("Invalid Data\n");
            return 1;
        }
        array[i].steps = atoi(steps);
    }
    fclose(file);
    char newFilename[50];
    strcpy(newFilename,filename);
    strcat(newFilename,".tsv");
    qsort(array,noRecords,sizeof(FitnessData),compare);
    FILE *newFile = fopen(newFilename, "w+");
    for (int i = 0; i<noRecords; i++){
        fprintf(newFile,"%s\t%s\t%d\n",array[i].date,array[i].time,array[i].steps);
    }
    fclose(newFile);
}
