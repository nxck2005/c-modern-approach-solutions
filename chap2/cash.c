#include <stdio.h>

int main(void)
{
    int initialAmount, twentyBills, tenBills, fiveBills, oneBills;

    printf("Enter a dollar amount: $");
    scanf("%d", &initialAmount);

    twentyBills = initialAmount / 20;
    initialAmount -= twentyBills * 20;

    tenBills = initialAmount / 10;
    initialAmount -= tenBills * 10;

    fiveBills = initialAmount / 5;
    initialAmount -= fiveBills * 5;

    oneBills = initialAmount;
    initialAmount = 0;

    printf("$20 bills: %d\n", twentyBills);
    printf("$10 bills: %d\n", tenBills);
    printf("$5 bills: %d\n", fiveBills);
    printf("$1 bills: %d\n", oneBills);

    return 0;
}