/*Pattern 8
WAP that reads a positive number N and prints the given pattern
for N rows.
Sample Input:
4
Sample Output:
    AA
    ABBA
    ABCCBA
    ABCDDBA*/
#include <iostream>
using namespace std;
void pattern6(int n)
{
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        int j;
        // start characters
        for (j = 1; j <= i; j++)
        {
            cout << (char)(c + j - 1);
        }
        // end characters
        for (j = j - 1; j >= 1; j--)
        {
            cout << (char)(c + j - 1);
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern6(n);
    return 0;
}