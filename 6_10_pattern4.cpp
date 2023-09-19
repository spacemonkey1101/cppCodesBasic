/*Pattern 4
WAP that reads a positive number N and prints
the given pattern for N rows.
Sample Input:
3
Sample Output:
      *
     ***
    *****
    */
#include <iostream>
using namespace std;
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern4(n);
    return 0;
}