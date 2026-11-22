#include <stdio.h>

int is_prime(int number)
{
    int divisor;
    if (number < 2)
        return 0;
    for (divisor = 2; divisor <= number / divisor; divisor++)
        if (number % divisor == 0)
            return 0;
    return 1;
}

int main(void)
{
    int first, last, number, found = 0;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &first, &last) != 2)
        return 1;
    if (first > last) {
        int temp = first;
        first = last;
        last = temp;
    }
    printf("Prime numbers: ");
    for (number = first; number <= last; number++) {
        if (is_prime(number)) {
            printf("%d ", number);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");
    return 0;
}
