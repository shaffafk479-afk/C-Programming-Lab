#include <stdio.h>

int main(void)
{
    int first[10][10], second[10][10], rows, columns, i, j;
    printf("Enter rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 10 || columns < 1 || columns > 10)
        return 1;
    printf("Enter first matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            if (scanf("%d", &first[i][j]) != 1)
                return 1;
    printf("Enter second matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            if (scanf("%d", &second[i][j]) != 1)
                return 1;
    printf("Sum matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++)
            printf("%d ", first[i][j] + second[i][j]);
        printf("\n");
    }
    return 0;
}
