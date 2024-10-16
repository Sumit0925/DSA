#include <iostream>
using namespace std;

//! when is Array is passed in an Fuction It is passed with 
//? "Pass By Refrence"

void printArray (int arr[],int n) {  //* you can also use ( * arr ) instead of ( arr[] )
    cout<<endl<<"Array in Function :";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<< " ";
    }
    
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Actual Array :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    printArray(arr,n);
    
}