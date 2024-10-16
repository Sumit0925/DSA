#include <iostream>
using namespace std;

//* Problem: Print all the subArrays in an array

void printingSubArrays(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      //   cout << "(" << i << "," << j << ")";

      for (int k = i; k <= j; k++) {
        cout << arr[k]<<",";
      }
      cout<<endl;
    }
  }
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(int);

  printingSubArrays(arr, n);

  return 0;
}