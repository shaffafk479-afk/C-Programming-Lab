#include <stdio.h>

int main(void)
{
    int first, last;
    long long i;
    long long sum = 0;

    printf("Enter the starting and ending numbers: ");
    if (scanf("%d %d", &first, &last) != 2)
        return 1;
    if (first > last) {
        int temp = first;
        first = last;
        last = temp;
    }
    for (i = first; i <= last; i++)
        if (i % 2 != 0)
            sum += i;
    printf("Sum of odd numbers: %lld\n", sum);
    return 0;
}
