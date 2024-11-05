#include <bits/stdc++.h>
using namespace std;

int main() {
  char sentence[1000];

  char temp = cin.get();

  int len = 0;

  // could have checked our len doesn't exceed the sentence array, additional
  // check
  while (temp != '\n') {
    sentence[len++] = temp;
    temp = cin.get();
  }
  sentence[len] = '\0';  // termination the last element with null character
                         // otherwise it will give us Garbage Value as we are using cin.get()

  cout << "Length " << len << endl;

  cout << sentence << endl;
}