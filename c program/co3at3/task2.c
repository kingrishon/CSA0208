#include <stdio.h>

int main()
{
    int bills = 800000;
    float bill = 275.00;
    long long total;

    total = (long long)bills * 27500;

    printf("Number of bills: %d\n", bills);
    printf("Individual bill: Rs. %.2f\n", bill);
    printf("Total bill: Rs. %.2f\n", total / 100.0);

    return 0;
}