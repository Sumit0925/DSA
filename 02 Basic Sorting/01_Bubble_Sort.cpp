#include <iostream>
using namespace std;

//* bubble sort for Increasing Order
void bubble_sort_Inc(int arr[], int n) {
  for (int times = 1; times <= n - 1; times++) {
    // repeating swapping
    for (int j = 0; j <= n - times - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

//* bubble sort for Decreasing Order
void bubble_sort_Dec(int arr[], int n) {
  for (int times = 1; times <= n - 1; times++) {
    // repeating swapping
    for (int j = 0; j <= n - times - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  cout << "UnSorted Array : ";
  for (auto x : arr) {
    cout << x << " ";
  }

  cout << endl;

  bubble_sort_Inc(arr, n);
  cout << "Bubble Sort Increasing Order : ";
  for (auto x : arr) {
    cout << x << " ";
  }

  cout << endl;

  bubble_sort_Dec(arr, n);
  cout << "Bubble Sort Decreasing Order : ";
  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}