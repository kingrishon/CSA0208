#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define TO_PAISE(r) ((r) * 100)

int main(void)
{
    int a = 5, b = 8, rupees = 50;

    printf("Square = %d\n", SQUARE(a + 1));
    printf("Maximum = %d\n", MAX(a, b));
    printf("Paise = %d\n", TO_PAISE(rupees));

    return 0;
}