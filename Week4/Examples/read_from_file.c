#include <stdio.h>
#include <stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    //number of chars that will be read per line.
    int buffer_size = 100;
    //A string that will hold each line as it's read in.
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }

    fclose(file);
    return 0;
}