#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array

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

void displayMenu()
{
    printf("A: Specify the filename to be imported\n");
    printf("B: Display the total number of records in the file\n");
    printf("C: Find the date and time of the timeslot with the fewest steps\n");
    printf("D: Find the date and time of the timeslot with the largest number of steps\n");
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n");
}
int openFile(char *filename)
{
    int buffer_size = 1000;
    char line_buffer[buffer_size];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
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
char countMinMax(char *filename, int minMax)
{
    int i;
    FITNESS_DATA array[100];
    char steps[10];
    int buffer_size = 1000, noRecords;
    char line_buffer[buffer_size];
    FILE *file = fopen(filename, "r");
    file = fopen(filename, "r");
    char new_buffer[buffer_size];
    noRecords = countTotal(filename);
    int minSteps = 10000000;
    int maxSteps = 0;
    char finalStr[40];
    char date[20];
    char time[20];
    int valid;
    for (i = 0; i <= noRecords; i++)
    {
        fgets(new_buffer, buffer_size, file);
        tokeniseRecord(new_buffer, ",", array[i].date, array[i].time, steps);
        array[i].steps = atoi(steps);
        if (minMax == 1)
        {
            if ((array[i].steps) < minSteps)
            {
                minSteps = array[i].steps;
                valid = 1;
            }
            else
            {
                valid = 0;
            }
        }
        else
        {
            if ((array[i].steps) > maxSteps)
            {
                maxSteps = array[i].steps;
                valid = 1;
            }
            else
            {
                valid = 0;
            }
        }
        if (valid == 1)
        {
            int z = 0, b = 0;
            while (array[i].date[z] != '\0')
            {
                finalStr[b] = array[i].date[z];
                z++;
                b++;
            }
            z = 0;
            finalStr[b] = ' ';
            b++;
            while (array[i].time[z] != '\0')
            {
                finalStr[b] = array[i].time[z];
                z++;
                b++;
            }
        }
    }
    fclose(file);
    if (minMax == 1)
    {
        printf("Fewest steps: %s\n", finalStr);
    }
    else
    {
        printf("Largest steps: %s\n", finalStr);
    }
    return 0;
}
void calculateMean(char *filename)
{
    int i, total = 0;
    FITNESS_DATA array[100];
    char steps[10];
    int buffer_size = 1000, noRecords;
    char line_buffer[buffer_size];
    FILE *file = fopen(filename, "r");
    file = fopen(filename, "r");
    char new_buffer[buffer_size];
    noRecords = countTotal(filename);
    for (i = 0; i <= noRecords; i++)
    {
        fgets(new_buffer, buffer_size, file);
        tokeniseRecord(new_buffer, ",", array[i].date, array[i].time, steps);
        array[i].steps = atoi(steps);
        total += array[i].steps;
    }
    float mean = total / noRecords;
    printf("Mean step count: %.0f\n", mean);
}
void findPeriod(char *filenamer)
{
    int i,highCount=0,curCount,last=0;
    FITNESS_DATA array[100];
    char steps[10];
    int buffer_size = 1000, noRecords;
    char line_buffer[buffer_size];
    FILE *file = fopen(filenamer, "r");
    file = fopen(filenamer, "r");
    char new_buffer[buffer_size];
    char start[30],end[30],finalStart[30],finalEnd[30];
    noRecords = countTotal(filenamer);
    printf("%d",noRecords);
    for (i = 0; i < noRecords; i++)
    {
        fgets(new_buffer, buffer_size, file);
        tokeniseRecord(new_buffer, ",", array[i].date, array[i].time, steps);
        array[i].steps = atoi(steps);
        char space[]=" ";
        if (array[i].steps>500){
            curCount+=1;
            if (last==0){
                start[0]='\0';
                strcat(start,array[i].date);
                //strcat(start,space);
                strcat(start,array[i].time);
                last=1;
                
            }else{
                end[0]='\0';
                strcat(end,array[i].date);
                strcat(end,space);
                strcat(end,array[i].time);
            }

            if (curCount>highCount){
                int c=0;
                while (start[c]!='\0'){
                    finalStart[c]=start[c];
                    c++;
                }
                c=0;
                while (end[c]!='\0'){
                    finalEnd[c]=end[c];
                    c++;
                }
                highCount=curCount;
                
            }
        }else{
            last=0;
            curCount=0;
        }
    }
    printf("%s\n",finalStart);
    printf("%s\n",finalEnd);
    printf("%s %s\n",finalStart,finalEnd);
}

// Complete the main function
char filename[50];
int main()
{
    displayMenu();
    char choice[1], minSteps[20];
    int total;
    scanf("%s", choice);
    switch (choice[0])
    {
    case 'a':
    case 'A':
        printf("Input Filename:\n");
        scanf("%s", filename);
        if (openFile(filename) == 0)
        {
            printf("Error: could not open file\n");
            return 1;
        }
        printf("File successfully loaded.\n");
        break;
    case 'b':
    case 'B':
        total = countTotal(filename);
        printf("Total records: %d\n", total);
        break;
    case 'c':
    case 'C':
        countMinMax(filename, 1);
        break;
    case 'd':
    case 'D':
        countMinMax(filename, 0);
        break;
    case 'e':
    case 'E':
        calculateMean(filename);
        break;
    case 'f':
    case 'F':
        findPeriod(filename);
        break;
    case 'q':
    case 'Q':
        return 0;
    default:
        printf("Invalid choice. Try again\n");
    }
    main();
    return 0;
}
