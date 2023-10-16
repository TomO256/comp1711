#include <stdio.h>

int main()
{
    printf("Please enter mark to be checked");
    int mark;
    scanf("%d",&mark);
    if (mark > 0 && mark < 100)
    {
        if (mark == 0)
        {
            printf("The mark of %d is zero\n", mark);
        }
        else if (mark < 40)
        {
            printf("The mark of %d is a fail\n", mark);
        }
        else if (mark > 60 && mark <= 70)
        {
            printf("The mark of %d is a 2:1\n", mark);
        }
        else if (mark >= 70)
        {
            printf("The mark of %d is a first\n", mark);
        }
        else
        {
            printf("The mark of %d is a pass\n", mark);
        }
    }
    else
    {
        printf("Please enter a valid score\n");
    }
    int answer=-1;
    printf("Enter another score? (0/1)");
    while (answer==-1){
        scanf("%d",&answer);
        if (answer==1){
            main();
            return 0;
        }
        else if (answer==0){
            return 0;
        }else{
            printf("Please enter 1 or 0");
            answer=-1;
        }
    }
}