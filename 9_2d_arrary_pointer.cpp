#include <iostream>

using namespace std;

int main()
{
    int arr[][4] = {
        {1, 2, 3, 4},
        {4, 5, 6, 9}};
    cout << "arr " << arr << endl;               // X
    cout << "arr + 1 " << arr + 1 << endl;       // Y = X + 16
    cout << "&arr[0][0] " << &arr[0][0] << endl; // X
    cout << "&arr[0][1] " << &arr[0][1] << endl; // X + 4
    cout << "&arr[1][0] " << &arr[1][0] << endl; // Y
    // arr acts as a row pointer its a pointer to an array
    //  like int (*ptr)[4] -- pointer to an
}
