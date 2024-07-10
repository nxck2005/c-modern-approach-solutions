#include <stdio.h>

int main(void)
{
    int itemNo, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNo);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");

    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", itemNo, price, month, day, year);

    return 0;
}