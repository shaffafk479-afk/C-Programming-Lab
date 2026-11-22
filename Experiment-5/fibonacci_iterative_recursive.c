#include <stdio.h>

long long fibonacci_recursive(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main(void)
{
    int terms, i;
    long long first = 0, second = 1, next;

    printf("Enter number of terms (0 to 40): ");
    if (scanf("%d", &terms) != 1 || terms < 0 || terms > 40) {
        printf("Please enter a number from 0 to 40.\n");
        return 1;
    }

    printf("Iterative series: ");
    for (i = 0; i < terms; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\nRecursive series: ");
    for (i = 0; i < terms; i++)
        printf("%lld ", fibonacci_recursive(i));
    printf("\n");
    return 0;
}
