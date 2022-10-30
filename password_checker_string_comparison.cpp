#include <iostream>
using namespace std;

bool checkPassword(char *expected, char *given)
{
    int ind = 0;

    while (given[ind] != '\0')
    {
        if (expected[ind] != given[ind])
        {
            return false;
        }
        ind++;
    }
    return true;
}

int main()
{
    char expected_password[] = "hack1092";
    char given_passwrod[100];

    cout << "Please enter your password" << endl;
    cin >> given_passwrod;

    bool res = checkPassword(expected_password, given_passwrod);

    if (res)
    {
        cout << "Access granted" << endl;
    }
    else
    {
        cout << "access denied" << endl;
    }
    return 0;
}