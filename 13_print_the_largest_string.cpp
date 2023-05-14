#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char current[100];
    char largest[100];
    int n, largest_length = 0;
    cout << "enter the number of strings" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter string " << i + 1 << endl;
        cin.ignore(); // discard the trailing '\n'
        cin.getline(current, 100);
        if (strlen(current) > largest_length)
        {
            strcpy(largest, current);
            largest_length = strlen(largest);
        }
    }
    cout << "largest string is " << largest << " of length " << largest_length << endl;
    return 0;
}