#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "enter the number of rows" << endl;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        int j;
        for (j = 0; j <=i; j++)
        {
            cout << (char)(65+j);
        }

        for (j=j-1; j >= 0; j--)
        {
            cout << (char)(65+j);
        }
        cout << endl;
    }
    return 0;
}