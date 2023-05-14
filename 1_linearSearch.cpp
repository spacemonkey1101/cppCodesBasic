#include <iostream>
using namespace std;

int linearSearch(int *a, int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    int a[n], key;
    cout << "enter the " << n << " elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element you want to find" << endl;
    cin >> key;
    int res = linearSearch(a, n, key);

    if (res == -1)
    {
        cout << "the element cant be found" << endl;
    }
    else
    {
        cout << "the element " << key << " is found at " << res << endl;
    }
}