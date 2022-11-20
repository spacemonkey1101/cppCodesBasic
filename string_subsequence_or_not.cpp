#include <iostream>
using namespace std;

bool isSubSequence(string a, string b)
{
    int index = -1, j;

    for (int i = 0; i < a.size(); i++)
    {
        for (j = 0; j < b.size(); j++)
        {
            if (b[j] == a[i] && j > index)
            {
                index = j;
                break;
            }
        }
        if (j == b.size())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a = "xyz", b = "axbycz";
    cout << isSubSequence(a, b);
}

/*
 Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109,
 and you want to check one by one to see if t has its subsequence.
In this scenario, how would you change your code?*/