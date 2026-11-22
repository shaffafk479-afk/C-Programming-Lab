#include <stdio.h>

int main(void)
{
    int choice, marks;

menu:
    printf("\nStudent Grade and Result Management\n");
    printf("1. Check result and grade\n2. Exit\nEnter choice: ");
    if (scanf("%d", &choice) != 1)
        return 1;

    switch (choice) {
    case 1:
        printf("Enter total marks out of 100: ");
        if (scanf("%d", &marks) != 1)
            return 1;
        if (marks < 0 || marks > 100) {
            printf("Invalid marks\n");
        } else if (marks < 40) {
            printf("Result: Fail\nGrade: F\n");
        } else {
            printf("Result: Pass\nGrade: ");
            switch (marks / 10) {
            case 10:
            case 9: printf("A\n"); break;
            case 8: printf("B\n"); break;
            case 7: printf("C\n"); break;
            case 6: printf("D\n"); break;
            default: printf("E\n");
            }
        }
        goto menu;
    case 2:
        printf("Exiting.\n");
        break;
    default:
        printf("Invalid choice\n");
        goto menu;
    }
    return 0;
}
