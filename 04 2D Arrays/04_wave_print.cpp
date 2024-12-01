#include <bits/stdc++.h>
using namespace std;

void spiratlPrint(int arr[][4], int n, int m) {
  int rowStart = 0;
  int rowEnd = n - 1;
  int colStart = 0;
  int colEnd = m - 1;

    //* Loop until the Last Column is equal to the First Column
  while (colEnd >= colStart) {
    //*Traversing the last Column (i.e Top to Bottom)
    for (int i = rowStart; i <= rowEnd; i++) {
      cout << arr[i][colEnd] << " ";
    }

    //*Check if this Column is the first column OR we reached the first Column then Stop
    if (colEnd == 0) {
      break;
    }

    colEnd--;

    //* Reverse Traversing the last Column (i.e Top to Bottom)
    for (int i = rowEnd; i >= rowStart; i--) {
      cout << arr[i][colEnd] << " ";
    }

    //*Check if this Column is the first column OR we reached the first Column then Stop
    if (colEnd == 0) {
      break;
    }

    //* Updating the Last Column
    colEnd--;

    // if (colEnd > 0) {
    //   colEnd--;
    // }
  }
}

int main() {
  int arr[][4] = {
      {1, 2 ,3},
      {5, 6, 7},
      {9, 10, 11},
      {13, 14, 15},
  };
  int n = 4;
  int m = 3;

  spiratlPrint(arr, n, m);

  return 0;
}