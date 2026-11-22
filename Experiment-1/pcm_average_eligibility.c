#include <stdio.h>

int main(void)
{
    float physics, chemistry, mathematics, average;

    printf("Enter Physics, Chemistry and Mathematics marks: ");
    if (scanf("%f %f %f", &physics, &chemistry, &mathematics) != 3)
        return 1;

    average = (physics + chemistry + mathematics) / 3.0f;
    printf("Average marks: %.2f\n", average);
    if (physics >= 50 && chemistry >= 50 && mathematics >= 50 && average >= 60)
        printf("Eligible\n");
    else
        printf("Not eligible\n");
    return 0;
}
