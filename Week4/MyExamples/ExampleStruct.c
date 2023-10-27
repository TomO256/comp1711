#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[20];
    char student_id[11];
    unsigned mark;
};


int main()
{
    struct student new_student;
    char name[20], student_id[11];
    unsigned mark;
    printf("Enter the student name");
    scanf("%s",name);
    strcpy(new_student.name,"test");
    printf("Enter the student ID number");
    scanf("%s",student_id);
    strcpy(new_student.student_id,"asdf");
    printf("Enter the student's mark");
    scanf("%u",&mark);
    strcpy(new_student.mark,itoa("40"));

    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Student mark: %u\n", new_student.mark);
    return 0;
}
