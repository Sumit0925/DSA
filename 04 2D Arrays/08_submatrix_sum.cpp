#include <bits/stdc++.h>
using namespace std;

/*  Given a matrix of size M x N, there are large number of queries to find
    submatrix sums. Inputs two queries are left top and right bottom indexes of
    ubmatrix whose sum is to find out.

    How to preprocess the matrix so that submatrix sum queries can be performed in
    O(1) time.

//* INPUT FORMAT:
    Given a matrix (2d vector) and query.. Each query has Starting row, Starting
    column, Ending row, Ending column. 
*/

int submatrix_sum(vector<vector<int>> v, int sr, int sc, int er, int ec) {
  int r = v.size();     //* no. of rows
  int c = v[0].size();  //* no. of columns

  int tli = sr, tlj = sc, rbi = er, rbj = ec;

  //* horizontal prefix sum
  for (int i = 0; i < r; i++) {
    for (int j = 1; j < c; j++) {
      v[i][j] += v[i][j - 1];
    }
  }

  //* vertical prefix sum
  for (int j = 0; j < c; j++) {
    for (int i = 1; i < r; i++) {
      v[i][j] += v[i - 1][j];
    }
  }

  int res = 0;

  if (tli > 0 && tlj > 0) {
    res = v[rbi][rbj] - v[rbi][tlj - 1] - v[tli - 1][rbj] + v[tli - 1][tlj - 1];
  } else if (tli > 0) {
    res = v[rbi][rbj] - v[tli - 1][rbj];
  } else if (tlj > 0) {
    res = v[rbi][rbj] - v[rbi][tlj - 1];
  } else {
    res = v[rbi][rbj];
  }

  return res;
}

int main() {
  //

  vector<vector<int>> v = {
      {1, 2, 3, 4, 6}, 
      {5, 3, 8, 1, 2}, 
      {4, 6, 7, 5, 5}, 
      {2, 4, 8, 9, 4}
  };

  int sr = 2;  //* Starting row
  int sc = 2;  //* Starting column
  int er = 3;  //* Ending row
  int ec = 4;  //* Ending column

  int ans = submatrix_sum(v, sr, sc, er, ec);

  cout << "Sum Between " << sr << "," << sc << " and " << er << "," << ec
       << " is : " << ans;
  return 0;
}