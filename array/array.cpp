#include <iostream>
using namespace std;

int main () {
  int arr[] = {2, 4, 5, 1, 3};
  int length = sizeof(arr) / sizeof(arr[0]);
  // sizeof give us size in byte

  for (int i = 0 ; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}