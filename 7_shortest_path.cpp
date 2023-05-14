#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter the direction" << endl;
    char ch = cin.get();
    ch = toupper(ch);

    int x = 0, y = 0;

    while (ch != '\n')
    {
        switch (ch)
        {
        case 'N':
            x++;
            break;
        case 'S':
            x--;
            break;
        case 'E':
            y++;
            break;
        case 'W':
            y--;
            break;
        }
        ch = cin.get();
        ch = toupper(ch);
    }

    cout << "End Coordinates (X,Y) is " << x << ", " << y << endl;

    cout << "Shortest distance is " << endl;

    if (x >= 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "N";
        }
    }
    else
    {
        for (int i = x; i < 0; i++)
        {
            cout << "S";
        }
    }
    if (y >= 0)
    {
        for (int i = 0; i < y; i++)
        {
            cout << "E";
        }
    }
    else
    {
        for (int i = y; i < 0; i++)
        {
            cout << "W";
        }
    }
    cout << endl;
    return 0;
}