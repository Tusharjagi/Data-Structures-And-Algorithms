#include <iostream>
using namespace std;

int main () {
  int arr[] = {1, 5, 3, 2, 4};
  int lengthOfArray = sizeof(arr) / sizeof(arr[0]);

  int ne
  int* newArray = new int[lengthOfArray + 1];


  for (int i = 0; i < lengthOfArray; i++) {
    cout << arr[i] << " ";
  };
  cout << endl;  

  return 0;
}