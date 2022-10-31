#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
bool isVaildAnagram(string s1, string s2)
{
    sort(s1.begin(), s1.end()); // inplace sorting
    sort(s2.begin(), s2.end());

    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // key idea : sort 2 string and then check for equality
    string s1, s2;
    cout << "Enter string 1 " << endl;
    cin >> s1;
    cout << "Enter string 2 " << endl;
    cin >> s2;

    if (isVaildAnagram(s1, s2))
    {
        cout << "They are anagrams" << endl;
    }
    else
    {
        cout << "They are NOT anagrams" << endl;
    }
    return 0;
}