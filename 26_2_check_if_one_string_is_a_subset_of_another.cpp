#include <iostream>
#include <string>

using namespace std;
bool isSubSequence(string a, string b)
{
    // write your code here
    if (a.find(b) == -1)
    {
        return false;
    }
    return true;
}

int main()
{
    string s1 = "ADXCPY", s2 = "AXY";

    if (isSubSequence(s1, s2))
    {
        cout << "Can be substrings" << endl;
    }
    else
    {
        cout << "Cant be substrings" << endl;
    }
    return 0;
}