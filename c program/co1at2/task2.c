#include <stdio.h>

int main(void)
{
    int units;
    long totalPaise;

    printf("Enter electricity units: ");

    if (scanf("%d", &units) != 1 || units < 0)
    {
        printf("Invalid input!\n");
        return 1;
    }

    totalPaise = (long)units * 500 + 5000;

    printf("Units: %d\n", units);
    printf("Total Bill: Rs. %ld.%02ld\n",
           totalPaise / 100, totalPaise % 100);

    return 0;
}