#include <bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int n) {
  //* getting the largest element
  int largest = -1;

  for (int i = 0; i < n; i++) {
    largest = max(largest, arr[i]);
  }

  //* create a count dynamic array/vector
  vector<int> freq(
      largest + 1,
      0);  //! vector whose size is largest element +1 and all elements are zero

  //* update the frequency vector
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  //* Put back the elements from freq vector into original array
  int j = 0;
  for (int i = 0; i <= largest; i++) {
    while (freq[i] > 0) {
      arr[j] = i;
      freq[i]--;
      j++;
    }
  }
}

int main() {
  int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
  int n = sizeof(arr) / sizeof(int);

  counting_sort(arr, n);
  cout << "Sorted Array :";
  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}