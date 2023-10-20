#include <stdio.h>

int str_len(char string[1000])
{
    int i=0;
    while (string[i] != '\0')
    {
        i+=1;
    }
    return i;
}
int main(){
    char string[1000];
    int chars;
    printf("Enter a string\n");
    scanf("%s",string);
    chars=str_len(string);
    printf("There are %d characters in the string %s\n",chars,string);
    return 0;
}