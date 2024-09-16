//Pay particular amount using certain bills
#include <stdio.h>

int main(void)
{
//prompting the user for input
    int amnt = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &amnt);

//$20 needed for the amount
    int b, bi, bil, bill, rem = 0;
    b = amnt / 20;
    rem = amnt % 20;
//$10 needed for the amount
    bi = rem / 10;
    rem = rem % 10;
//$5 needed for the amount
    bil = rem / 5;
    rem = rem % 5;
//%1 needed for the amount
    bill = rem / 1;

//output
    printf("$20 bills: %d\n", b);
    printf("$10 bills: %d\n", bi);
    printf(" $5 bills: %d\n", bil);
    printf(" $1 bills: %d\n", bill);
}
