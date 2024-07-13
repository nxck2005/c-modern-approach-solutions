#include <stdio.h>

int main(void)
{
    int decimalNo, octalNo, ones, tens, hundreds, 
    thousands, tenthousands;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimalNo);

    ones = decimalNo % 8;
    decimalNo = decimalNo / 8;
    tens = decimalNo % 8;
    decimalNo = decimalNo / 8;
    hundreds = decimalNo % 8;
    decimalNo = decimalNo / 8;
    thousands = decimalNo % 8;
    decimalNo = decimalNo / 8;
    tenthousands = decimalNo % 8;

    octalNo = (tenthousands * 10000) + (thousands * 1000)
              + (hundreds * 100) + (tens * 10) + ones;

    printf("In octal, your number is: %5.5d\n", octalNo);

    return 0;
}