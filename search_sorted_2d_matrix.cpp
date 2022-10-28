/* Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

    Integers in each row are sorted from left to right.

    The first integer of each row is greater than the last integer of the previous row.

Example 1.


source: leetcode


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

Output: true


Example 2.


source: leetcode


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13

Output: false


Constraints:

m == matrix.length

n == matrix[i].length

1 <= m, n <= 100

-10^4 <= matrix[i][j], target <= 10^4 */

#include <iostream>
using namespace std;

bool rowSearch(int two_d_array[][4], int col, int key, int row)
{
    for (int i = 0; i < col; i++)
    {
        if (two_d_array[row][i] == key)
        {
            cout << "Found at " << row << " , " << i << endl;
            return true;
        }
    }
    return false;
}

void search(int two_d_array[][4], int row, int col, int key)
{
    for (int i = row - 1; i >= 0; i--)
    {
        if (two_d_array[i][0] <= key)
        {
            if (rowSearch(two_d_array, col, key, i))
            {
                return;
            }
        }
    }
    cout << "not found" << endl;
}
int main()
{
    int two_d_array[][4] = {{1, 2, 4, 5}, {9, 13, 17, 19}, {20, 36, 48, 49}};

    int key;

    cout << "Enter the key to search" << endl;
    cin >> key;

    search(two_d_array, 3, 4, key);

    return 0;
}