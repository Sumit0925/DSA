#include <bits/stdc++.h>
using namespace std;

//* 2D Array is passed by its refrence in an function
//! while you're passing 2D array you must pass the no. of columns while the
//! passing the no. of rows in optional
void print(int arr[][100], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  //
  int arr[1000][100];
  int n, m;  //* n rows and m columns
  cout << "Enter the no. of rows and columns : ";
  cin >> n >> m;

  cout << "Enter the array : ";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  cout << endl;
  print(arr, n, m);

  return 0;
}