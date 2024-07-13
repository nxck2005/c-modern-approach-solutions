#include <stdio.h>

int main(void)
{
    int ones, tens, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);

    printf("The reversal is: %d%d%d\n", ones, tens, hundreds);

    return 0;
}