#include <stdio.h>

#define RATE 5
#define FIXED 50

int main()
{
    int units = 100;
    int bill = units * RATE + FIXED;

#ifdef DEBUG
    printf("Debug Bill: %d\n", bill);
#endif

    printf("Units: %d\n", units);
    printf("Total Bill: Rs. %d\n", bill);

    return 0;
}