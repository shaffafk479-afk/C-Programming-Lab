#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
        return 1;
    if (number % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
