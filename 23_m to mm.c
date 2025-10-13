#include <stdio.h>

void main() 
{
    float m, mm;

    printf("Enter length in meter: ");
    scanf("%f", &m);

    mm = m * 1000;

    printf("Length in mm = %.0fmm\n", mm);
    
}
