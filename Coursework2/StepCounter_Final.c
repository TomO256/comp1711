#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }


void displayMenu(){
    printf("A: Specify the filename to be imported\n");
    printf("B: Display the total number of records in the file\n");
    printf("C: Find the date and time of the timeslot with the fewest steps\n");
    printf("D: Find the date and time of the timeslot with the largest number of steps\n");
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n");
}
int openFile(char *filename){
    int buffer_size = 1000;
    char line_buffer[buffer_size];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return 0;
    }else{
        return 1;
    }
}
int countTotal(char *filename){
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
// Complete the main function
char filename[50];
int main() {
   displayMenu();
   char choice[1];
   int total;
   scanf("%s",choice);
   switch (choice[0]){
    case 'a':
    case 'A':
        printf("Input Filename:\n");
        scanf("%s",filename);
        if (openFile(filename)==0){
            printf("Error: could not open file\n");
            return 1;
        }
        printf("File successfully loaded.\n");
            break;
    case 'b':
    case 'B':
        total=countTotal(filename);
        printf("Total records: %d\n",total);
        break;
    case 'c':
    case 'C':
        printf("Option C");
        break;
    case 'd':
    case 'D':
        printf("Option D");
        break;
    case 'e':
    case 'E':
        printf("Option E");
        break;
    case 'f':
    case 'F':
        printf("Option F");
        break;
    case 'q':
    case 'Q':
        return 0;
    default:
        printf("Invalid choice. Try again\n");
   }
   main();

}









