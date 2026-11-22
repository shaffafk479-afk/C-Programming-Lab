#include <stdio.h>

int main(void)
{
    int numbers[100], count, i;
    int *pointer = numbers;
    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 100)
        return 1;
    printf("Enter %d elements: ", count);
    for (i = 0; i < count; i++)
        if (scanf("%d", pointer + i) != 1)
            return 1;
    printf("Reverse order: ");
    for (i = count - 1; i >= 0; i--)
        printf("%d ", *(pointer + i));
    printf("\n");
    return 0;
}
