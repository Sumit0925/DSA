#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

//! comparator
//~ it basically controls how we do the comparison
bool comparator(int a, int b) {
  //
  return a > b;
}

int main() {
  // vector<int> arr = {-2, 3, 4, -1, 5, -12, 6, 1, 3};  //? vector

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  // sort(arr,arr+n);  // sort fucntion for array

  //=======================================================================
  //&                     Sorting array in descending order

  //^   (1) With reverse() funciton------------(which is inbuilt function)
  // sort(arr, arr + n);
  // reverse(arr, arr + n);

  //^   (2) With comparator------------

  // sort(arr, arr + n, comparator);
  //*sort function takes a function ( e.g comparator) as prameter

  //^   (3) With Inbuilt Comparator------------( greater<int>() )

  sort(arr, arr + n, greater<int>());

  //* inbuilt comparator " greater<int>() " for sorting in descending order
  // sort(arr.begin(),arr.end(),greater<int>());    //? sort for vector

  cout << "Sorted array :";
  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}