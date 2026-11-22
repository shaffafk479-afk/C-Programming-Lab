#include <stdio.h>

int main(void)
{
    int first, second;
    int *a = &first, *b = &second;
    printf("Enter two numbers: ");
    if (scanf("%d %d", a, b) != 2)
        return 1;
    printf("Sum: %d\n", *a + *b);
    return 0;
}
