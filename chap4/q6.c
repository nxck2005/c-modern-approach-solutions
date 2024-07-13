/* Computes a European Article Number check digit */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6,
        first_sum, second_sum, total, remainder, check;

    printf("Enter the first 11 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, 
        &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = i1 + i3 + i5 + j2 + j4 + j6;
    second_sum = d + i2 + i4 + j1 + j3 + j5;
    total = 3 * first_sum + second_sum;
    total = total - 1;
    remainder = total % 10;

    check = 9 - remainder;

    printf("Check digit: %d\n", check);

    return 0;
}