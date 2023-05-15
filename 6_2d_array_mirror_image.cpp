/*Given two matrices matrix1[][] and matrix2[][] of size NxN.
The task is to find if the given two matrices are mirror images of one another.
Return true if the given two matrices are mirror images, else return false.

Input:

matrix1[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},

matrix2[][] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}}

Output: True

Constraints: 1 <= N <= 100*/

#include <iostream>
using namespace std;

bool mirrorImage(int matrix1[][3], int matrix2[][3], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix1[i][j] != matrix2[i][N - j - 1])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int N = 3;

    int matrix1[][3] = {{1, 2, 3}, {1, 6, 7}, {9, 8, 6}};
    int matrix2[][3] = {{3, 2, 1}, {7, 6, 1}, {6, 9, 8}};

    if (mirrorImage(matrix1, matrix2, N))
    {
        cout << "the matrices are MIRROR images of each other" << endl;
    }
    else
    {
        cout << "the matrices are NOT MIRROR images of each other" << endl;
    }
    return 0;
}