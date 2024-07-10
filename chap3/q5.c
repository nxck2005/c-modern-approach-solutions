#include <stdio.h>

int main(void)
{
    int one, two, three, four, five, six, seven, eight, nine,
    ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one, &two, &three, &four,
    &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve,
    &thirteen, &fourteen, &fifteen, &sixteen);

    printf("%d\t%d\t%d\t%d\n", one, two, three, four);
    printf("%d\t%d\t%d\t%d\n", five, six, seven, eight);
    printf("%d\t%d\t%d\t%d\n", nine, ten, eleven, twelve);
    printf("%d\t%d\t%d\t%d\n", thirteen, fourteen, fifteen, sixteen);

    return 0;
}