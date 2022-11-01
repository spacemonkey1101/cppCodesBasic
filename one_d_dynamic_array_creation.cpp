#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array" << endl;
    cin >> n;

    int *arr = new int[n];
    cout << "Address stored by the array pointer is " << arr << endl;

    cout << "Enter the elements one by one" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    // deleting the memory allocated in heap
    delete[] arr;

    //this is not recommended 
    cout << "Address stored by the array pointer is " << arr << endl;

    return 0;
}