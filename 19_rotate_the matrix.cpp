/*Rotate the matrix.

Implement a function that takes 2-D matrix as argument
and returns the matrix which is 90 degree rotated clockwise.
Sample Input
1 2 3
4 5 6
7 8 9

3 4
1 2
Sample Output

7 4 1
8 5 2
9 6 3

1 3
2 4
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << matrix[row][col] << ",";
        }
        cout << endl;
    }
}

void transverse(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            swap(matrix[row][col], matrix[col][row]);
        }
    }
}

void reverserRowsIndividual(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Before:" << endl;
    printVector(matrix);

    transverse(matrix);
    reverserRowsIndividual(matrix);

    cout << "After:" << endl;
    printVector(matrix);
}