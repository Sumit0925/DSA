#include <iostream>
using namespace std;

//* Problem: Find the sum of SubArrays and print the largest Sum
//! Prefix Sum Approach O(N^2)

int largestSubarraySum2(int arr[], int n) {
  //* Prefix Sum
  int prefix[n] = {0};
  prefix[0] = arr[0];

  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  //* Largest Sum logic
  int largestSum = 0;
  for (int i = 0; i < n; i++) {
    int SubarraySum = 0;
    for (int j = i; j < n; j++) {
      SubarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
      largestSum = max(largestSum, SubarraySum);
    }
  }
  return largestSum;
}

int main() {
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  cout << "Largest Sum : " << largestSubarraySum2(arr, n);

  return 0;

}