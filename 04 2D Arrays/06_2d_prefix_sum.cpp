#include <bits/stdc++.h>
using namespace std;

void matrix_prefix_sum(int a[][5], int n, int m) {
  int prefix[n][m];

  prefix[0][0] = a[0][0];

  //* Corner/Boundary case i.e prefix for first row & first column
  for (int i = 1; i < m; i++) {
    prefix[0][i] = prefix[0][i - 1] + a[0][i];
  }
  for (int i = 1; i < n; i++) {
    prefix[i][0] = prefix[i - 1][0] + a[i][0];
  }

  //*Updating the values in the cells as per the general formula

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      prefix[i][j] =
          prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
    }
  }

  //* printing the prefix sum matrix(2d array)

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << prefix[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {


  int arr[4][5] = {
      {1, 2, 7, 9, 7}, 
      {4, 5, 8, 3, 5}, 
      {3, 2, 11, 4, 6}, 
      {6, 0, 7, 12, 5}
};

  int n = 4;
  int m = 5;

  matrix_prefix_sum(arr,n,m);

  return 0;
}