#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    if (n & 1) // remember 0 is falsy value and 1 is a truthy value 
        cout << "odd" << endl;
    else
        cout << "even" << endl;
}