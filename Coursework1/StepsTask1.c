#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct
{
    char date[11];
    char time[6];
    int steps;
} FITNESS_DATA;

// Define any additional variables here

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
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
// Complete the main function
int main()
{
    char *filename = "FitnessData_2023.csv";
    int buffer_size = 1000;
    char line_buffer[buffer_size];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    int count = 0;
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        count++;
    }
    fclose(file);
    printf("Number of records in file: %d\n", count);
    int i;
    FITNESS_DATA array;
    char *date;
    char *time;
    char *steps;
    file = fopen(filename, "r");
    char new_buffer[buffer_size];
    for (i = 0; i <= 2; i++)
    {
        fgets(new_buffer, buffer_size, file);
        tokeniseRecord(new_buffer, ",", array.date, array.time, steps);
        array.steps=atoi(steps);
        printf("%s/%s/%d\n", array.date, array.time, array.steps);
    }
    fclose(file);
    return 0;
}