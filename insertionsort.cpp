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

void insertionSort(int *a, int size)
{
    for(int i = 1; i < size; i++) {
        int pos =i;
        for(int j = i -1 ; j >=0 ; j--) {
            if(a[pos] < a[j]) {
                swap(a,pos--,j);
            }
        }
    }
}

int main()
{
    int arr[] = {1, 4, 7, 3, 2, 1, 4, 11, 10, -1, 2, -5};
    int size = sizeof(arr) / sizeof(int);

    cout << "before sort" << endl;
    printArr(arr, size);

    insertionSort(arr, size);

    cout << "after sort" << endl;
    printArr(arr, size);

    return 0;
}