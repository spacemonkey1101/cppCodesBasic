/*Count of unique characters
Implement a function that takes an character array and its
length as an argument and returns the count of different
characters present in it.


Sample Input
a b b a c d e
z z z

Sample Output
5
1

Explanation :  for test case one, a b c d e are different characters present. hence answer is 5.
Similarly for second test case, answer should be 3.
*/

#include <bits/stdc++.h>
using namespace std;

int countOfDifferentCharacters(char C[], int size)
{
    unordered_map<char, int> freq;

    for (int i = 0; i < size; i++)
    {
        freq[C[i]]++;
    }

    return freq.size();
}

// same prob without using extra memory
int countOfDifferentCharacters2(char C[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    sort(C, C + size);

    int res = 1;
    for (int i = 1; i < size; i++)
    {
        if (C[i - 1] == C[i])
        {
            continue;
        }
        res++;
    }
    return res;
}

int main()
{
    char C[] = "abbacdedaaabba";
    int size = strlen(C);
    cout << countOfDifferentCharacters(C, size) << endl;
    cout << countOfDifferentCharacters2(C, size) << endl;
}