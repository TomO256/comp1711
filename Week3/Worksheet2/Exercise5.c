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

char concatStrings(char stringOne[], char stringTwo[])
{
    int strOneLen,strTwoLen,total,i;
    strOneLen=str_len(stringOne);
    strTwoLen=str_len(stringTwo);
    total=strOneLen+strTwoLen;
    char finalString[total];
    for (i=0;i<=strOneLen-1;i++)
    {
        finalString[i]=stringOne[i];
    }
    for (i=strOneLen;i<=total-1;i++)
    {
        finalString[i]=stringTwo[i-strOneLen];
    }
    printf("Final String: %s",finalString);
    //return finalString;
}
int main()
{
    char stringOne[100],stringTwo[100],result[200];
    printf("Enter the first string");
    scanf("%c",stringOne);
    printf("Enter the second string");
    scanf("%c",stringTwo);
    concatStrings(stringOne,stringTwo);
    //printf("The concationation of the strings is: %s",result);
}