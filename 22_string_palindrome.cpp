#include <iostream>
#include <string>

using namespace std;

int isPalindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s1 = "love";
    if (isPalindrome(s1) == 1)
    {
        cout << s1 << " is a palindrome" << endl;
    }
    else
    {
        cout << s1 << " is NOT a palindrome" << endl;
    }
}