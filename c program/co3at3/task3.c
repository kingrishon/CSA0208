#include <stdio.h>

#define R1 150
#define R2 250
#define R3 400

int main()
{
    int units;
    long long bill;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = (long long)units * R1;
    else if (units <= 200)
        bill = 100LL * R1 + (long long)(units - 100) * R2;
    else
        bill = 100LL * R1 + 100LL * R2
             + (long long)(units - 200) * R3;

    printf("Total bill: Rs. %lld.%02lld\n",
           bill / 100, bill % 100);

    return 0;
}