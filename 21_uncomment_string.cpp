#include <iostream>
#include <string>
using namespace std;

string uncomment(string s)
{
    int index1 = s.find("/*");
    int index2 = s.find("*/");

    int startIndex = index1 + 2;
    int length = index2 - startIndex;
    return s.substr(startIndex, length);
}
int main()
{
    string s = " /* Hello World */";
    cout << uncomment(s);
    return 0;
}