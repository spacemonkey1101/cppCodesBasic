#include <iostream>
#include <algorithm>

using namespace std;
bool comparator(int a, int b){
    return a>b;
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " <<n<<" elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    sort(arr, arr + n, comparator);
    cout << endl;
    cout << "After sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}