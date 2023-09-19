#include <iostream>

using namespace std;

/*
   1
  232
 34543
4567654

*/
void printNumberPyamid(int n)
{
    // rows
    for (int i = 1; i <= n; i++)
    {
        // space
        int j;
        for (j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        // numbers forward
        for ( j = i; j <= 2 * i - 1; j++)
        {
            cout << j;
        }
        // numbers backward
        for (j = j - 2; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printNumberPyamid(n);
    return 0;
}