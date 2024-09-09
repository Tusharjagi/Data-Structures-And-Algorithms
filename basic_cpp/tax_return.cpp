#include <iostream>
using namespace std;

int main () {
  double sales = 95000;
  cout << "sales" << sales;

  const double stateTaxRate = .04;
  double stateTax = sales * stateTaxRate;
  cout << "state tax = " << stateTax << endl;

  const double countryTaxRate = .02;
  double countryTax = sales * countryTaxRate;
  cout << "country tax = " << countryTax << endl;

  double totalTax = stateTax + countryTax;
  cout << "total tax = " << totalTax << endl;
  return 0;
}