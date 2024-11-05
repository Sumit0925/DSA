#include <bits/stdc++.h>
using namespace std;

//! Given a sentence , count the number of alphabets,digits & spaces in the
//! sentence

int main() {
  //* read one by one and then count

  char ch;

  ch = cin.get();

  // Count

  int alphabets = 0;
  int digits = 0;
  int spaces = 0;

  while (ch != '\n') {
    if (ch >= '0' && ch <= '9')
      digits++;
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
      alphabets++;
    else if (ch == ' ' || ch == '\t')
      spaces++;
    ch = cin.get();
  }
  cout << endl;
  cout << "Total Alphabets : " << alphabets << endl;
  cout << "Total Digits : " << digits << endl;
  cout << "Total Spaces : " << spaces << endl;

  return 0;
}