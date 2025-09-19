#include<stdio.h>

void main()
{
    int base, height;
    int area;

    printf("Enter Base of Triangle:");
    scanf("%d", &base);

    printf("Enter Height of Triangle:");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Area of Triangle is: %d", area);
    
}