#include <bits/stdc++.h>
using namespace std;

void spiratlPrint(int arr[][4], int n, int m) {
  int startRow = 0;
  int endRow = n - 1;
  int startCol = 0;
  int endCol = m - 1;

  //* for outerLoop (Traverse array boundry)
  while (startRow <= endRow and startCol <= endCol) {
    // Start Row
    for (int i = startCol; i <= endCol; i++) {
      cout << arr[startRow][i] << " ";
    }

    // end Col
    for (int i = startRow + 1; i <= endRow; i++) {
      cout << arr[i][endCol] << " ";
    }

    // end Row
    for (int i = endCol - 1; i >= startCol; i--) {
      if (startRow == endRow) {
        break;
      }
      cout << arr[endRow][i] << " ";
    }

    // Start Col
    for (int i = endRow - 1; i >= startRow + 1; i--) {
      if (startCol == endCol) {
        break;
      }
      cout << arr[i][startCol] << " ";
    }

    //* Update the variables to point to the inner spiral
    startRow++;
    endCol--;
    endRow--;
    startCol++;
  }
}

int main() {
  int arr[][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}, 
    {13, 14, 15, 16},
    {17, 18, 19, 20}
    };
  int n = 5;
  int m = 4;

  spiratlPrint(arr, n, m);

  return 0;
}