#include <stdio.h>

int main()
{
    int roll_number;
    char student_name[30];
    int total_subjects;
    int i;
    float marks;
    int credit;
    int grade_point;
    float total_points = 0;
    int total_credits = 0;
    float gpa;

    printf("Enter Roll Number: ");
    scanf("%d", &roll_number);

    printf("Enter Student Name: ");
    scanf("%s", student_name);

    printf("Enter Total Subjects: ");
    scanf("%d", &total_subjects);

    for (i = 1; i <= total_subjects; i++)
    {
        printf("\nEnter Marks for Subject %d: ", i);
        scanf("%f", &marks);

        printf("Enter Credit for Subject %d: ", i);
        scanf("%d", &credit);

        if (marks >= 80)
        {
            grade_point = 10;
        }
        else if (marks >= 70)
        {
            grade_point = 9;
        }
        else if (marks >= 60)
        {
            grade_point = 8;
        }
        else if (marks >= 50)
        {
            grade_point = 7;
        }
        else if (marks >= 40)
        {
            grade_point = 6;
        }
        else
        {
            grade_point = 0;
        }

        total_points = total_points + (credit * grade_point);
        total_credits = total_credits + credit;
    }

    gpa = total_points / total_credits;

    printf("\n--- RESULT ---\n");
    printf("\nStudent Name  : %s\n", student_name);
    printf("\nRoll Number   : %d\n", roll_number);
    printf("\nTotal Credits : %d\n", total_credits);
    printf("\nCalculated GPA: %.2f\n", gpa);

    return 0;
}