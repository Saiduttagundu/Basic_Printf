#include <stdio.h>

void main() 
{
    float c, fahrenheit;
    
    printf("Enter Celsius: ");
    scanf("%f", &c);

    fahrenheit = (c * 9/5) + 32;
    
    printf("Fahrenheit = %.2f\n", fahrenheit);
    
}
