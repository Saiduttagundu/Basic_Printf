#include<stdio.h>

void main()
{
    int radi;
    float area;

    printf("Enter the radius of circle :");
    scanf("%d", &radi);

    area = 3.14 * radi * radi;

    printf("Area of the circle is : %f", area);

}