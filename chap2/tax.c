#include <stdio.h>

int main(void)
{
    float intialAmount;

    printf("Enter an amount: ");
    scanf("%f", &intialAmount);

    printf("With tax added: $%.2f\n", 
    intialAmount + (0.05f * intialAmount));

    return 0;
}