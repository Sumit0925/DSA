#include <bits/stdc++.h>
using namespace std;

int main() {
  char a[1000] = "apple";
  char b[1000];

  //*length of string -> strlen()
  cout << strlen(a) << endl;

  //*string copy -> strcpy()
  strcpy(b, a);
  cout << b << endl;

  //*string compare -> strcmp()
  //^ 0 -> if the compared strings are equal
  //^ +ve -> if the first non-matching character in the "first string" has
  // greater ASCII Value than the corresponding character in the "second string"
  //^ -ve -> vice-versa of the +ve
  cout << strcmp(a, b) << endl;

  //* string concatenate -> strcat()
  char fname[] = "Sumit ";
  char lname[] = "Angural";
  cout << strcat(fname, lname);

  return 0;
}