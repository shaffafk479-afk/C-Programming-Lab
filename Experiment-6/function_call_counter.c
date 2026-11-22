#include <stdio.h>

void counter(void)
{
    static int count = 0;
    count++;
    printf("Function called %d time(s)\n", count);
}

int main(void)
{
    int calls, i;
    printf("How many times should the function be called? ");
    if (scanf("%d", &calls) != 1 || calls < 0)
        return 1;
    for (i = 0; i < calls; i++)
        counter();
    return 0;
}
