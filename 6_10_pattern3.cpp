/*Pattern 3
WAP that reads a positive number N and prints the given pattern
for N rows.

Sample Input: 
3
Sample Output:
    1
    23
    456*/
#include <iostream>
using namespace std;
void pattern3(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern3(n);
    return 0;
}