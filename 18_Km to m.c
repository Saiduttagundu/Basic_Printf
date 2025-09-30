#include <stdio.h>

int main() 
{
    float km, convert;

    printf("Enter distance in km: ");
    scanf("%f", &km);

    convert = km * 1000;

    printf("Distance in meters = %.2f\n", convert);
    
}
