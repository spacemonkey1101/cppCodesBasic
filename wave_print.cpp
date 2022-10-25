#include <iostream>
using namespace std;

void printArr(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void wavePrint(int arr[][4], int n, int m)
{
    for (int col = 0; col < m; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3, m = 4;
    printArr(arr, n, m);

    cout << endl;
    cout << "Wave Print" << endl;
    wavePrint(arr, n, m);
}
