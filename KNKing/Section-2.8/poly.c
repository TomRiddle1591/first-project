//Displaying value of a polynomial
#include <stdio.h>

int main(void)
{   //------------------this part show result of no5--------------------//
//declaring a variable
    int x;
//prompting the user for input
    printf("Enter a value of X: ");
    scanf("%d", &x);
//initializing, assigning, calculating
    int poly_equ = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6;
//since C doesn't have exponentiation operator we've to manually calculate x^5, x^4 and so forth
    printf("Value for %d in polynomial is: %d\n", x, poly_equ);

    //----------this part show result for no6-------------//
    printf("---MODIFIED PROGRAM---\n");
//initializing a new variable for Horner's Rule
    int poly_equ1 = ((((3*x + 2)*x -5)*x - 1)*x + 7)*x - 6;
    printf("Value for %d in polynomial using Horner's Rule is: %d\n", x, poly_equ1);
}
