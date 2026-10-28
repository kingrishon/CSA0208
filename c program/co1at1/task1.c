int main()
{
    int previous, current, units;
    float energy, total;

    printf("Enter previous reading: ");
    scanf("%d", &previous);

    printf("Enter current reading: ");
    scanf("%d", &current);

    units = (current - previous + 65536) % 65536;

    if (units <= 100)
        energy = 0;
    else if (units <= 200)
        energy = (units - 100) * 2.25;
    else
        energy = 100 * 2.25 + (units - 200) * 4.50;

    total = energy + 50;

    printf("Units consumed: %d\n", units);
    printf("Energy charge: Rs. %.2f\n", energy);
    printf("Total bill: Rs. %.2f\n", total);

    return 0;
}