#include <iostream>
using namespace std;

int main () {
  int arr[] = {2, 4, 5, 1, 3};
  int length = sizeof(arr) / sizeof(arr[0]);
  // sizeof give us size in byte

  // int newLength = length + 1;
  // creating a array size less by 1 
  int newLength = length - 1;
  int* newArr = new int[newLength]; 

  // for adding element at the end
  // for (int i = 0; i < length; i++) {
  //   newArr[i] = arr[i];
  // };
  // newArr[length] = 6;

  // for adding element at the start
  // for (int i = 0; i < length; i++) {
  //   newArr[i + 1] = arr[i];
  // };
  // newArr[0] = 100;

  // for adding element at the specific position 
  // for (int i = 0; i < length; i++) {
  //   newArr[i] = arr[i];
  // }
  // newArr[2] = 1000;

  // delete element from the end 
  // for (int i = 0; i < length; i++) {
  //   newArr[i] = arr[i];
  // };

  // delete element from the start
  // for (int i = 0; i < length; i++) {
  //   newArr[i] = arr[i + 1];
  // };

  // delete element at the specific position
  for (int i = 0, j = 0; i < length; i++) {
    if (i != 3) {
      newArr[j++] = arr[i];
    }
  }

  for (int i = 0 ; i < newLength; i++) {
    cout << newArr[i] << " ";
  }
  cout << endl;

  delete[] newArr;

  return 0;
}