#include <iostream>
using namespace std;
void printArr(int *A, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << A[i] << " ,";
    }
    cout << endl;
}
void swap(int *a, int index1, int index2)
{
    int temp = a[index1];
    a[index1] = a[index2];
    a[index2] = temp;
}

void selectionSort(int *a, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minInd = i;
        for (int j = i; j < size - 1; j++)
        {
            if (a[minInd] > a[j])
            {
                minInd = j;
            }
        }
        if (minInd != i)
        {
            swap(a, i, minInd);
        }
    }
}

int main()
{
    int arr[] = {1, 4, 7, 3, 2, 1, 4, 11, 10, -1, 2, -5};
    int size = sizeof(arr) / sizeof(int);

    cout << "before sort" << endl;
    printArr(arr, size);

    selectionSort(arr, size);

    cout << "after sort" << endl;
    printArr(arr, size);

    return 0;
}