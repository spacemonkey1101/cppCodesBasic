
/*Sort an array !

Given an array A of elements belonging to set {0, 1, 2}.

Implement a function that takes A as argument and returns the sorted array A.


Hint :  Time Complexity should be O(n)

Sample Input

2 1 0 0 1 2

1 1 1 0

Sample Output

0 0 1 1 2

0 1 1 1


Explanation :

for test case one, A = {2, 1, 0, 0, 2}. After sorting A becomes {0, 0, 1, 1, 2}, hence Output is 0 0 1 1 2.

Similarly for second test case, Output is 0 1 1 1.
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> sortTheArray(vector<int> A)
{
    vector<int> result;
    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
        {
            c0++;
        }
        else if (A[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    for (int i = 0; i < c0 + c1 + c2; i++)
    {
        if (i < c0)
        {
            result.push_back(0);
        }
        else if (i < c0 + c1)
        {
            result.push_back(1);
        }
        else
        {
            result.push_back(2);
        }
    }

    return result;
}

int main()
{
    vector<int> A = {0, 1, 2, 2, 2, 0, 1, 2};
    A = sortTheArray(A);
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << ",";
    }
    cout << endl;
}