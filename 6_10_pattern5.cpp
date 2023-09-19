/*Pattern 7

WAP that reads a positive number N and prints the given pattern
for N rows.
Sample Input:
5
Sample Output:
    1
    01
    101
    0101
    10101*/
#include <iostream>
using namespace std;
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool val = i%2 == 1;
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val = !val;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern5(n);
    return 0;
}