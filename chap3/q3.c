#include <stdio.h>

int main(void)
{
    int prefix, group, pubCode, itemNo, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &pubCode, &itemNo, &check);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", pubCode);
    printf("Item number: %d\n", itemNo);
    printf("Check digit: %d\n", check);

    return 0;
}