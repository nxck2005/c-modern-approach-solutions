#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate = (interestRate / 100.0f) / 12.0f;

    loanAmount -= monthlyPayment;
    loanAmount += loanAmount * interestRate;

    printf("Balance remaining after first payment: $%.2f\n", loanAmount);

    loanAmount -= monthlyPayment;
    loanAmount += loanAmount * interestRate;

    printf("Balance remaining after second payment: $%.2f\n", loanAmount);

    loanAmount -= monthlyPayment;
    loanAmount += loanAmount * interestRate;

    printf("Balance remaining after third payment: $%.2f\n", loanAmount);

    return 0;
}