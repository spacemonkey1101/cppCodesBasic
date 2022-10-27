#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3};

    cout << "address of arr " << arr << endl;
    cout << "address of arr + 1 " << arr + 1 << endl; // one element forward based on data type
    cout << "address of arr - 1 " << arr - 1 << endl; // goes back by 1 byte ; out of array

    int x = 100, y = 90;
    int *ptr = &x;
    cout << "ptr points to x now" << ptr << endl;
    ptr = &y;
    cout << "ptr points to x now" << ptr << endl;
    // arr = &y; -- error -- array is a readonly pointer

    ptr = arr; // assigning pointer to array

    cout << "using ptr = ptr + 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Address " << ptr << " Value " << *ptr << endl;
        ptr = ptr + 1;
    }

    cout << "using *(ptr + i)" << endl;
    ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *(ptr + i) << endl; // this is same as arr[i]
    }

    cout << "using *(arr + i)" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << " "; // this is same as arr[i]
    }

    cout << "\npointer substraction" << endl;
    // pointer + pointer = makes no sense
    // pointer - pointer = gives the no of elemnts between them
    int *ptr1 = arr + 1;
    int *ptr2 = arr + 3;

    cout << "ptr1 is " << ptr1 << endl;
    cout << "ptr2 is " << ptr2 << endl;

    cout << "ptr2 - ptr1 gives us " << ptr2 - ptr1 << endl;
    return 0;
}