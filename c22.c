#include <stdio.h>
#include <conio.h>

int main()
{
    float radius, area;
    float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of circle = %.2f", area);
    return 0;
}