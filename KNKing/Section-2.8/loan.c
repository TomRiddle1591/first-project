//Calculating the remaining balance on a loan
#include <stdio.h>

int main(void)
{
//declaring original amount of LOAN, balance, rate, monthly rate, pay;
    float L, bal, R, m_Pay, pay;

//prompting the user for input
    printf("Enter amount of Loan: ");
    scanf("%f", &L);

    bal = L;

    printf("Enter interest rate: ");
    scanf("%f", &R);

//assigning monthly rate
    m_Pay = (R / 100) / 12;

    printf("Enter monthly payment: ");
    scanf("%f", &pay);
//calculating balance after 1st month payment
    bal = (bal - pay) + (bal * m_Pay);
    printf("Balance remaining after first payment: $%.2f\n", bal);

//calulating balance after 2nd payment
    bal = (bal - pay) + (bal * m_Pay);
    printf("Balance remaining after second payment: $%.2f\n", bal);

//calculating balance after 3rd payment
    bal = (bal - pay) + (bal * m_Pay);
    printf("Balance remaining after third payment: $%.2f\n", bal);

}

//i took help from other sources to come up with this solution.
//this is more refined and efficient designed code
