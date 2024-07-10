#include <stdio.h>

int main(void)
{
    int code, part1, part2;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &code, &part1, &part2);

    printf("You entered %d.%d.%d\n", code, part1, part2);

    return 0;
}