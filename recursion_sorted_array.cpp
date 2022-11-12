#include <iostream>
#include <vector>

using namespace std;

bool isArraySorted(int *arr, int size)
{
    if (size == 1 || size == 0)
    {
        return true;
    }

    if (*arr < *(arr + 1))
    {
        cout << arr[0] << endl;
        cout << arr[1] << endl;
        return isArraySorted(arr + 1, size - 1);
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 2};
    int size = sizeof(arr) / sizeof(int);
    if (isArraySorted(arr, size))
    {
        cout << " the array is sorted ";
    }
    else
    {
        cout << " the array is NOT sorted ";
    }
    return 0;
}