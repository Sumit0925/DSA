#include <iostream>
using namespace std;

//* Problem: Find the sum of SubArrays and print the largest Sum
//! Kadane's Algorithm O(N^3)

int largestSubarraySum3(int arr[], int n) {
  int currentSum = 0;
  int largestSum = 0;

  for (int i = 0; i < n; i++) {
    currentSum = currentSum + arr[i];
    if (currentSum < 0) {
      currentSum = 0;
    }
    largestSum = max(largestSum, currentSum);
  }
  return largestSum;
}

int main() {
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  //   int arr[] = {1, 2, 3, -6, 1, 1};
  int n = sizeof(arr) / sizeof(int);

  cout << "Largest Sum : " << largestSubarraySum3(arr, n);

  return 0;
}