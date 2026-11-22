#include <stdio.h>

int main(void)
{
    int numbers[100], count, i, largest;
    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 100)
        return 1;
    printf("Enter %d elements: ", count);
    for (i = 0; i < count; i++)
        if (scanf("%d", &numbers[i]) != 1)
            return 1;
    largest = numbers[0];
    for (i = 1; i < count; i++)
        if (numbers[i] > largest)
            largest = numbers[i];
    printf("Largest element: %d\n", largest);
    return 0;
}
