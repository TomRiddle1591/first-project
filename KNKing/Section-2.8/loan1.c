#include <stdio.h>

int main(void)
{
//this is a code written without any help

//prompting the user for input
    float amount, intrst, m_pay;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &intrst);
    printf("Enter monthly payment: ");
    scanf("%f", &m_pay);

//initializing monthly interest
    float m_intrst = ((intrst / 100) / 12);

//balance after 1st payment
    float frst = (amount - m_pay) + (amount * m_intrst);
//balance after 2nd payment
    float scnd = (frst - m_pay) + (frst * m_intrst);
//balance after 3rd payment
    float thrd = (scnd - m_pay) + (scnd * m_intrst);

//displaying output
    printf("Balance remaining after first payment: $%.2f\n", frst);
    printf("Balance remaining after second payment: $%.2f\n", scnd);
    printf("Balance remaining after third payment: $%.2f\n", thrd);
}

//this is a self helped designed code but no so efficient.
