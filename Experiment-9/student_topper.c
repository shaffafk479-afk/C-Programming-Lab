#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main(void)
{
    struct student_record students[5];
    int i, topper = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll number and total marks for student %d: ", i + 1);
        if (scanf("%49s %d %f", students[i].name, &students[i].roll_number, &students[i].total_marks) != 3)
            return 1;
        if (students[i].total_marks > students[topper].total_marks)
            topper = i;
    }
    printf("Topper\nName: %s\nRoll number: %d\nTotal marks: %.2f\n",
           students[topper].name, students[topper].roll_number, students[topper].total_marks);
    return 0;
}
