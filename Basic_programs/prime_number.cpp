#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  // int i = 2;

  // while (i < n) {
  //   if (n % i == 0) {
  //     cout << "not prime" << endl;
  //   } else {
  //     cout << "Prime" << endl;
  //   }
  //   i = i + 1;
  // }

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "Not Prime Number" << i << endl;
    } else {
      cout << "Prime number" << i << endl;
    }
  }



  return 0;
}