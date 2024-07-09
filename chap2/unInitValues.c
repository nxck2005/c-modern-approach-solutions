#include <stdio.h>

int main(void) 
{
    int a, b, c;
    float d, e, f;

    printf("Uninitialized ints: %d, %d, %d\n", a, b, c);
    printf("Uninitialized floats: %f, %f, %f\n", d, e, f);

    return 0;
}