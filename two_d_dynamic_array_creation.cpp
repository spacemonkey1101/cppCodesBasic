#include <iostream>

using namespace std;

int **create2DArray(int rows, int cols)
{
    // array of ponters
    int **arr = new int *[rows];

    // allocating memory row by row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    int val = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }

    return arr;
}

int main()
{
    int rows, cols;
    cout << "Enter the number of rows followed by the number of columns" << endl;
    cin >> rows >> cols;

    int **arr = create2DArray(rows, cols);
    cout << "The 2D array contains" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " , ";
        }
        cout << endl;
    }
    return 0;
}