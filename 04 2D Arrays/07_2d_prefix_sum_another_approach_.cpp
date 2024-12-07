#include <bits/stdc++.h>
using namespace std;

void matrix_prefix_sum(int a[][5], int n ,int m){
    
    //* horizontal prefix sum
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            a[i][j] +=a[i][j-1];
        }
        
    }

    //* vertical prefix sum
    for (int j = 0; j < m; j++)
    {
        for (int i = 1; i < n; i++)
        {
            a[i][j] += a[i-1][j];
        }
        
    }

    //* Printing the prefix sum matrix(2d array)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     
    
    
}

int main() {
  int arr[][5] = {
      {1, 2, 7, 9, 7}, 
      {4, 5, 8, 3, 5}, 
      {3, 2, 11, 4, 6}, 
      {6, 0, 7, 12, 5}};

  int n = 4;
  int m = 5;

  matrix_prefix_sum(arr, n, m);

  return 0;
}