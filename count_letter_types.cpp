#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[100];
    int whitespace = 0, letter = 0, special = 0, digit = 0;
    cout << "Enter the sentence followed by a $" << endl;
    cin.getline(arr, 100, '$'); // read 100 chars into arr till you get a $

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ')
        { // if (issplace(arr[i]))
            whitespace += 1;
        }
        else if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            // if (isaplha(arr[i]))
            letter += 1;
        }
        else if (arr[i] >= '0' and arr[i] <= '9')
        { // if (isdigit(arr[i]))
            digit += 1;
        }
        else
        {
            special += 1;
        }
    }

    cout << "Letter " << letter << " , digit " << digit << " , whitespace " << whitespace << " , special character " << special << endl;
    return 0;
}
