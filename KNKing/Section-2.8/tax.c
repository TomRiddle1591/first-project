//Displaying result with 5% tax added
#include <stdio.h>

//naming a value which is constant
#define TAX_PERCENTAGE 0.05

int main(void)
{
//declaring a variable
    float amount;
//prompting user for input
    printf("Enter an amount: ");
    scanf("%f", &amount);
//initializing, assigning, calculating all at the same time
    float tax = amount + (amount * TAX_PERCENTAGE);
    printf("With Tax Added: $%.2f\n", tax);
}
