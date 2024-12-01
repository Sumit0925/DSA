#include <bits/stdc++.h>
using namespace std;

pair<int,int> stairCaseSearch(int arr[][4],int n,int m, int key) {
    
    //* later if the element is not present , then return {-1,-1}
    if(key < arr[0][0] || key > arr[n-1][m-1]){
        return {-1,-1};
    }

    int i = 0;
    int j = m-1;

    while(i <= n-1 and j >= 0){
        if(key == arr[i][j]){
            return {i,j};
        }
        else if(key < arr[i][j]){
            j--;
        }
        else{
            i++;
        }
    }

    return {-1,-1};
}

int main() {
  //* 2D Row & Column Wise Sorted Array
  int arr[][4] = {
      {10, 20, 30, 40}, 
      {15, 25, 35, 45}, 
      {27, 29, 37, 48}, 
      {32, 33, 39, 50}};

    int n = 4;
    int m = 4;

    int key = 27;

   pair<int,int> coord = stairCaseSearch(arr,n,m,key);

   cout<<coord.first<<","<<coord.second;
  return 0;
}