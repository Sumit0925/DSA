#include <iostream>
using namespace std;

int binary_Search(int arr[], int n, int key) {
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] == key) {
      return mid;
    } 
    else if(arr[mid]>key) {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
  }
  return -1;
}

int main() { 

    int arr[] = {2,3,5,9,15,25,30,41};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter the Key :";
    cin>>key;

    int index = binary_Search(arr,n,key);

    if(index!=-1){
        cout<<key<<" is present at "<<index;
    }
    else{
        cout<<key<<" is not Found!";
    }

 }