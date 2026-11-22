#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main(void)
{
    struct employee person;
    FILE *file;
    int choice;

    printf("1. Add employee\n2. Display employees\nEnter choice: ");
    if (scanf("%d", &choice) != 1)
        return 1;

    if (choice == 1) {
        printf("Enter employee ID, name and salary: ");
        if (scanf("%d %49s %f", &person.id, person.name, &person.salary) != 3)
            return 1;
        file = fopen("employees.txt", "a");
        if (file == NULL) {
            printf("Could not open employee file.\n");
            return 1;
        }
        fprintf(file, "%d %s %.2f\n", person.id, person.name, person.salary);
        fclose(file);
        printf("Employee saved.\n");
    } else if (choice == 2) {
        file = fopen("employees.txt", "r");
        if (file == NULL) {
            printf("No employee records found.\n");
            return 0;
        }
        printf("ID\tName\tSalary\n");
        while (fscanf(file, "%d %49s %f", &person.id, person.name, &person.salary) == 3)
            printf("%d\t%s\t%.2f\n", person.id, person.name, person.salary);
        fclose(file);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }
    return 0;
}
