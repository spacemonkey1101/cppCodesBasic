/*Pattern 2
WAP that reads a positive number N and prints the given pattern
for N rows.
Sample Input:
4
Sample Output:
    1
    12
    123
    1234*/
#include <iostream>
using namespace std;
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
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
    pattern2(n);
    return 0;
}