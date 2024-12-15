#include <iostream>
using namespace std;

double calculateAverage (int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return static_cast<double>(sum) / size;
}

int main () {
  int size;
  cout << "Enter the size of Array" << endl;
  cin >> size;

  int arr[size];

  cout << "Enter the Elements in Array" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  double average = calculateAverage(arr, size);
  cout << "Average: " << average << endl;

  return 0;
}