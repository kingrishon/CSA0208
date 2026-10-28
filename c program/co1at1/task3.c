#include <stdio.h>

#define FIXED 5000
#define RATE2 225
#define RATE3 450

int main()
{
    int units[] = {0, 100, 150, 200, 350};
    long bill;

    for (int i = 0; i < 5; i++) {
        bill = FIXED;

        if (units[i] > 100)
            bill += (units[i] < 200 ? units[i] - 100 : 100) * RATE2;

        if (units[i] > 200)
            bill += (units[i] - 200) * RATE3;

        printf("%d units -> Rs. %ld.%02ld\n",
               units[i], bill / 100, bill % 100);
    }

    return 0;
}