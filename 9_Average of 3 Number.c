#include<stdio.h>

void main()
{
    int a, b, c;
    float average;

    printf("Enter value  for Number 1:");
    scanf("%d", &a);

    printf("Enter value  for Number 2:");
    scanf("%d", &b);

    printf("Enter value  for Number 3:");
    scanf("%d", &c);

    average = (a + b + c) / 3;

    printf("The Average of 3 no. are : %f", average);
}