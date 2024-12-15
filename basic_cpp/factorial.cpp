#include <iostream>
using namespace std;

long long Factorial (int num) {
  if (num == 0 || num == 0) {
    return 1;
  } else {
    return num * Factorial(num - 1); 
  }
}

int main () {
  int input;
  cout << "Enter you want a factorial for: ";
  cin >> input;

  int factorial = Factorial(input);
  cout << "Result: " << factorial << endl;

  return 0;
}