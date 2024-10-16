#include <iostream>
using namespace std;

//* Problem: Find the sum of SubArrays and print the largest Sum
//! Brute Force Approach O(N^3)

int largestSubarraySum1(int arr[], int n) {
  int largest_Sum = 0; //largest sum

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int currSum = 0; //current sum

      for (int k = i; k <= j; k++) {
        
        currSum += arr[k];
      }
      largest_Sum = max(largest_Sum,currSum);
    }
  }
  return largest_Sum;
}

int main() {
  int arr[] = {-2,3,4,-1,5,-12,6,1,3};
  int n = sizeof(arr) / sizeof(int);

 cout<<"Largest Sum : "<<largestSubarraySum1(arr, n);

  return 0;
}