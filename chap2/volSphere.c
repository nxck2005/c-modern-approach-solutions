#include <stdio.h>
#define PI 3.14f

int main(void)
{
    float radius;
    float fourThirds = (4.0f / 3.0f);

    printf("Radius of the sphere? \n");
    scanf("%f", &radius);

    float volume = fourThirds * PI * (radius * radius * radius);

    printf("Volume of the sphere: %.2f\n", volume);
    return 0;
}