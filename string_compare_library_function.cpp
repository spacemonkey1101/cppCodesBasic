#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word1[100], word2[100];

    cout << "enter word 1" << endl;
    cin >> word1;
    cout << "enter word 2" << endl;
    cin >> word2;

    cout << "String lengths" << endl;
    cout << "word1 length : " << strlen(word1) << endl;
    cout << "word2 length : " << strlen(word2) << endl;

    int result = strcmp(word1, word2);
    if (result == 0)
    {
        cout << "The two strings are equal" << endl;
    }
    else
    {
        cout << "The two strings are NOT equal" << endl;
    }
    cout << "value retuened is " << result << endl;
    return 0;
}