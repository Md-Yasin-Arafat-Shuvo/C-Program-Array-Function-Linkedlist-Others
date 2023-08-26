
#include <stdio.h>
#include <math.h>

double getArea(double radius);
int main()
{
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = getArea(radius);

    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}

double getArea(double radius)
{
    return (M_PI * radius * radius);
}
