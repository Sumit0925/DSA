#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
  for (int pos = 0; pos < n - 1; pos++) {
    int min_indx = pos;

    // finding the smallest element
    for (int j = pos + 1; j < n; j++) {
      if (arr[j] < arr[min_indx]) {
        min_indx = j;
      }
    }
    // swapping the smallest element with currenet element
    swap(arr[pos], arr[min_indx]);
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

  selection_sort(arr, n);
  cout << "Sorted Array : ";
  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}