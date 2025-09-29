#include <stdio.h>

int main() 
{
    int a, b, remainder;

    printf("Enter dividend: ");
    scanf("%d", &a);

    printf("Enter divisor: ");
    scanf("%d", &b);

    remainder = a % b;

    printf("Remainder = %d\n", remainder);
    
}
