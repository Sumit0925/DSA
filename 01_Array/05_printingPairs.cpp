#include <iostream>
using namespace std;

//* Problem: Print all Pairs of elements

void printAllpairs(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cout << arr[i] << "," << arr[j] << endl;
    }
    cout << endl;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  printAllpairs(arr, n);
}