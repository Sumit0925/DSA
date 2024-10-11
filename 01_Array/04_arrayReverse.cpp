#include <iostream>
using namespace std;

//*Problem : Reverse all the elements of an Array

void reverseArray(int arr[], int n) {
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    int mid = s + (e - s) / 2;
    swap(arr[s], arr[e]);
    s = s + 1;
    e = e - 1;
  }
}

int main() {
  int arr[] = {10, 20, 30, 45, 65, 75, 80, 95};
  int n = sizeof(arr) / sizeof(int);

  // Printing Array
  cout << "Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Printing Reversed Array
  reverseArray(arr, n);

  cout << "Reversed Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}