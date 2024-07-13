#include <stdio.h>

int main(void)
{
    int originalNumber, onesPlace, tensPlace, hundredsPlace, tensAndOnes, reversedNumber;

    printf("Enter a three-digit number: ");
    scanf("%d", &originalNumber);

    /* If the number is xyz, considering x, y and z are the seperate digits,
     * % 10 gives z, / 10 gives xy
     * xy is stored in tensAndOnes, and z in onesPlace
     * tensAndOnes % 10 gives tens place digit, and / 10 hundreds place digit
     */
    onesPlace = originalNumber % 10;
    tensAndOnes = originalNumber / 10;
    hundredsPlace = tensAndOnes / 10;
    tensPlace = tensAndOnes % 10;


    /* Reverse the place values of the digits to effectively 
     * reverse the digit
     */
    reversedNumber = (onesPlace * 100) + (tensPlace * 10) + hundredsPlace;

    printf("The reversal is: %d\n", reversedNumber);

    return 0;
}