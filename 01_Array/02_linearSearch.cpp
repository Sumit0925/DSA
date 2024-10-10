#include <iostream>
using namespace std;

int linear_Search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        //check if current element matches the key
        if (arr[i] == key)
        {
            return i;
        }
    }
    //out of the loop
    return -1;
}

int main()
{

    int arr[] = {2, 4, 5, 7, 9, 2, 3, 3, 10};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the key :";
    cin >> key;

    int index = linear_Search(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
}