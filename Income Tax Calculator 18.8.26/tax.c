#include <stdio.h>
int main(){
    float income, TaxableIncome;
    float tax, rebate, surcharge, finalTax;

    printf("Enter Your Annual Income: ");
    scanf("%f", &income);

    TaxableIncome = income-50000; //Standard Deduction

    if (TaxableIncome <= 250000) //Tax Calculation
    {
        tax = 0;
    }
    else if (TaxableIncome <= 500000)
    {
        tax = (TaxableIncome - 250000)*0.05;
    }
    else if (TaxableIncome <= 1000000)
    {
        tax = (250000*0.05) + (TaxableIncome - 500000)*0.20;
    }
    else
    {
        tax = (250000*0.05) +
              (500000*0.20) +
              (TaxableIncome - 1000000)*0.30;
    }

    if (tax < 10000) //Rebate
    {
        rebate = tax;
        tax = 0;
    }

    if (income > 5000000) //Surcharge
    {
        surcharge = tax*0.10;
    }

    finalTax = tax + surcharge; //Final Tax

    printf("Annual Income       : Rs. %.2f\n", income);
    printf("Taxable Income      : Rs. %.2f\n", TaxableIncome);
    printf("Tax Before Rebate   : Rs. %.2f\n", tax + rebate);
    printf("Rebate              : Rs. %.2f\n", rebate);
    printf("Surcharge           : Rs. %.2f\n", surcharge);
    printf("Final Tax           : Rs. %.2f\n", finalTax);
    return 0;
}