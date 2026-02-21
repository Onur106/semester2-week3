
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Onur Hasan Bakirhan
 * ID: 201982434
 */

 int main( void ) {

   double salary = 36250.0;
   double ni_rate = 8.0;
   double tax_rate = 15.0;
   
   double ni_contribution = 0.0;
   double tax_contribution = 0.0;
   double take_home_salary = 0.0;

   double salary_after_ni = 0.0;
   double taxable_income = 0.0;

   double ni_fraction = ni_rate / 100.0;
   double tax_fraction = tax_rate / 100.0;

   ni_contribution = salary * ni_fraction;
   salary_after_ni = salary - ni_contribution;

   if (salary_after_ni > 12500.0)

   {taxable_income = salary_after_ni - 12500.0;}

   else 
   {taxable_income = 0.0;}

   tax_contribution = taxable_income * tax_fraction;

   take_home_salary = salary_after_ni - tax_contribution;

   printf("NI contribution £%.2f\n", ni_contribution);
   printf("Tax contribution £%.2f\n", tax_contribution);
   printf("Take home salary £%.2f", take_home_salary);

    



    return 0;
 }