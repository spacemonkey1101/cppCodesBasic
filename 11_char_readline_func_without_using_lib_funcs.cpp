#include <iostream>

using namespace std;

void readline(char *ch_array, int size, char delim)
{
    char ch;
    int count = 0;
    while (true)
    {
        ch = cin.get();
        if (ch == delim || count == size - 1)
        {
            break;
        }
        ch_array[count++] = ch;
    }
    ch_array[count] = '\0';
    // '\0' is not included in the size of array
    cout << "size of array " << count + 1 << endl;
}

int main()
{
    char ch_array[100];

    cout << "Enter the sentence you want to read" << endl;
    readline(ch_array, 100, '$');

    cout << "This is the array we read" << endl;
    cout << ch_array << endl;
}