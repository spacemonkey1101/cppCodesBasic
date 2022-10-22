#include <iostream>
#include <algorithm>
using namespace std;

void printAllSubArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << arr[i] << arr[j] << ",";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements in the array";
    cin >> n;

    int arr[n];

    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}