#include <bits/stdc++.h>
using namespace std;

//* Problem: Read N strings and print the largest string. Each string can have
//* upto 1000 characters

int main() {
  int n;
  cout << "No. of strings you want to read : ";
  cin >> n;

  cin.get();  // to consume first new line i.e "\n" so that it didn't count as a
              // empty string

  char sentence[1000];
  char largest_string[1000];

  int largest_len = 0;

  while (n--) {
    cin.getline(sentence, 1000);
    int len = strlen(sentence);
    if (len > largest_len) {
      largest_len = len;
      strcpy(largest_string, sentence);
    }
  }

  cout << "The largest string is : " << largest_string << endl;

  return 0;
}
