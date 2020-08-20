#include <iostream>

#define MONTHS_IN_YEAR 12

using namespace std;

int main()
{
   double principal = 0.0;
   cout << "Enter the principal amount: ";
   cin >> principal;

   double interest = 0.0;
   cout << "Enter the interest rate: ";
   cin >> interest;

   int yearsOfLoan = 0;
   cout << "Enter loan duration (years): ";
   cin >> yearsOfLoan;


   const int monthsInYear = 12;

   double monthInterest = interest/MONTHS_IN_YEAR;
   long monthsOfLoan = yearsOfLoan*monthsInYear;

   cout << principal << " " << interest << " " <<
   yearsOfLoan << " " << monthInterest << " " << monthsOfLoan << endl;

   return 0;
}
