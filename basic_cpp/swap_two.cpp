#include <iostream>
using namespace std;

int main () {
  int a = 2;
  int b = 3;
  int c = 0;

  c = a;
  a = b;
  b = c;
  
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}