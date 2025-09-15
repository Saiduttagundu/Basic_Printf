#include<stdio.h>

void main()
{
    float num1, num2, sum;

    printf("Enter Number 1:");
    scanf("%f", &num1);

    printf("Enter Number 2:");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("The sum of Numbers are:%f", sum);
}