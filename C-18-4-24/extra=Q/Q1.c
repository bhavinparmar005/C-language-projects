#include <stdio.h>

int main()
{
    int student_mark;

    printf("Enter the student's mark:-");
    scanf("%d", &student_mark);
    if(student_mark > 100){
        printf(" 100%% ke se jyda mark nahi hote !!!!!!\n\n");
    }

    else if (student_mark >= 90 && student_mark <= 100)
    {
        printf("Grade :-A \n");
    }
    else if (student_mark >= 80 && student_mark <= 89)
    {
        printf(" Grade :-B\n");
    }
    else if (student_mark >= 70 && student_mark <= 79)
    {
        printf(" Grade :-C\n");
    }
    else if (student_mark >= 60 && student_mark <= 69)
    {
        printf(" Grade :-D\n");
    }
    else
    {
        printf("your student will not come next class\n\n");
        printf("better luck next time.........");
    }

    return 0;
}
