#include <bits/stdc++.h>
using namespace std;


//! Problem Statement
//* Find Displacement: Given a long route contianing N,S,E,W directions,
//* find the shortest path to react the location

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

  //* for 1st quadrant
  if(x>=0 && y>=0){
    while(y--){
      cout<<"N";
    }
    while(x--){
      cout<<"E";
    }
  }
  //* for 2nd quadrant
  if(x<=0 && y>=0){
    while(y--){
      cout<<"N";
    }
    while(x++){
      cout<<"W";
    }
  }
  //* for 3rd quadrant
  if(x<=0 && y<=0){
    while(y++){
      cout<<"S";
    }
    while(x++){
      cout<<"W";
    }
  }
  //* for 4th quadrant
  if(x>=0 && y<=0){
    while(y++){
      cout<<"S";
    }
    while(x--){
      cout<<"E";
    }
  }


  return 0;
}