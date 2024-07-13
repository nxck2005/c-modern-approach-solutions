#include <stdio.h>

int main(void)
{
    int originalNumber, onesPlace, tensPlace, reversedNumber;

    printf("Enter a two-digit number: ");
    scanf("%d", &originalNumber);

    /* % 10 gives last digit, /10 gives tens digit*/
    onesPlace = originalNumber % 10;
    tensPlace = originalNumber / 10;

    /* Reversed number will have the original number's last digit as first */
    reversedNumber = (onesPlace * 10) + tensPlace;

    printf("The reversal is: %d\n", reversedNumber);

    return 0;
}