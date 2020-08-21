#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"


#define MONTHS_IN_YEAR 12

using namespace std;

int main()
{

   const int percent_denominator = 100;
   const int monthsInYear = 12;

   double principal = 0.0;
   cout << "Enter the principal amount: ";
   cin >> principal;

   double human_interest = 0.0;
   cout << "Enter the interest rate: ";
   cin >> human_interest;

   double interest = divisor(human_interest, percent_denominator);

   int yearsOfLoan = 0;
   cout << "Enter loan duration (years): ";
   cin >> yearsOfLoan;

   double monthInterest = divisor(interest, MONTHS_IN_YEAR);
   long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);

   double monthly_payment = 0.0;
   monthly_payment = principal* (monthInterest / (1- (pow((double)1 + monthInterest, (double)-monthsOfLoan))));

   cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << monthly_payment << endl;

   return 0;
}
