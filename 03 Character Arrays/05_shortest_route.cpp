#include <bits/stdc++.h>
using namespace std;

int main() {
  char direction[1000];

  cin.getline(direction, 1000);
  int x = 0;
  int y = 0;

  for (int i = 0; direction[i] != '\0'; i++) {
    switch (direction[i]) {
      case 'E':
        x++;
        break;
      case 'W':
        x--;
        break;
      case 'N':
        y++;
        break;
      case 'S':
        y--;
        break;

      default:
        "Write in Capital Letters";
        break;
    }
  }

  cout<< "x : " << x << endl << "y : "<<y<<endl;

  return 0;
}