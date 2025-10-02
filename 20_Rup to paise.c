#include <stdio.h>

void main() 
{
    float rs, con;

    printf("Enter amount in rupees: ");
    scanf("%f", &rs);

    con = rs * 100;

    printf("Amount in paise = %.0f\n", con);
    
}
