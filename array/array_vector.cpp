#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector <int> arr = {2, 3, 4, 5, 1};
  // add element on back
  arr.push_back(6);
  // delete the last element;
  arr.pop_back();

  // add element on start
  arr.insert(arr.begin(), 10);
  // remove the element from the start
  arr.erase(arr.begin());

  // add element on specific pos
  arr.insert(arr.begin() + 2, 100);
  // remove the element from specific pos
  arr.erase(arr.begin() + 2);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  };
  cout << endl;
  return 0;
}