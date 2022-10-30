/*Is character array sorted ?

Implement a function that takes an character array as an argument an return 1 if array is sorted otherwise 0.

Sample Input
a a b b c c h

d a e f g d

Sample Output
1

0

Explanation :
for test case one, a comes first than b and b comes first than c and c comes first than h, hence it is sorted and output is 1.
Similarly for second test case, d comes after a which shows that answer should be 0. */
#include <iostream>
#include <cstring>

using namespace std;

int isSorted(char C[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (C[i] > C[i + 1]) // if ASCII value of C[0] >  C[1] return 0
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char C1[] = "acddez";
    char C2[] = "abadez";

    cout << "Result for C1 is " << isSorted(C1, strlen(C1)) << endl;
    cout << "Result for C2 is " << isSorted(C2, strlen(C2));

    return 0;
}