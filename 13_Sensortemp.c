#include<stdio.h>

void main()
{
    float A, B, sum, mul;

    printf("Enter First Temp.: ",A);
    scanf("%f", &A);

    printf("Enter Second Temp.: ",B);
    scanf("%f", &B);

    sum = A + B;
    mul = A * B;

    printf("Sum of %.2f & %.2f is %.2f\n", A, B, sum);
    printf("Multiplication of %.2f & %.2f is %.2f", A, B, mul);
}