#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
  for (int i = 1; i <= n - 1; i++) {
    int current = arr[i];
    int prev = i - 1;

    //loop to find the right index where the current element should be inserted
    while (prev >= 0 && arr[prev] > current) {
      arr[prev + 1] = arr[prev];
      prev = prev - 1;
    }
    //inserting the current element
    arr[prev + 1] = current;
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

  insertion_sort(arr, n);
  cout << "Sorted Array : ";
  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}