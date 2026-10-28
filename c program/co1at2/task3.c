#include <stdio.h>

int main(void)
{
    int units = 100;
    long totalPaise;

    totalPaise = (long)units * 500 + 5000;

    printf("Units: %d\n", units);
    printf("Total Bill: Rs. %ld.%02ld\n",
           totalPaise / 100, totalPaise % 100);

    printf("5 / 2 = %d\n", 5 / 2);
    printf("16250 / 100 = %ld\n", 16250L / 100);
    printf("Cast after division = %.1f\n",
           (double)(16250 / 100));
    printf("Cast before division = %.1f\n",
           (double)16250 / 100);

    return 0;
}