/* Polynomial to calculate : 
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

#include <stdio.h>

int main(void)
{
    int x;

    printf("What's x?: ");
    scanf("%d", &x);

    /*Using Horner's method of evaluating polynomials, */
    printf("Value of polynomial for given x: %d\n",
    ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}