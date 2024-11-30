#include <bits/stdc++.h>
using namespace std;

int main() {
  //* In 2D character array each string is treated as linear array

  char numbers[][10] = {"one", "two", "three", "forty", "eighty", "hundred"};

  //* printing all strings
  for (int i = 0; i < 6; i++) {
    cout << numbers[i] << endl;
  }
  cout << "================================" << endl;

  //* if you want to print 2 element of all the strings
  for (int i = 0; i < 6; i++) {
    cout << numbers[i][1] << endl;
  }

  return 0;
}