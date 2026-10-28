int main()
{
    float wh, bill, rate;
    int hour;

    printf("Enter energy in wh: ");
    scanf("%f", &wh);

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    if (wh < 0 || hour < 0 || hour > 23)
    {
        printf("Invalid input");
        return 0;
    }

    rate = 1.50;
    if (hour >= 18 && hour <= 22)
        rate = rate * 1.20;

    bill = (wh / 1000) * rate;

    printf("Energy: %.2f kWh\n", wh / 1000);
    printf("Total bill: Rs. %.2f\n", bill);

    return 0;
}