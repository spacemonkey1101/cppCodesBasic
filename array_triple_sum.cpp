#include <iostream>

using namespace std;

bool threeSum(int *nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = i + 2; k < size; k++)
            {
                if ((i != j) && (j != k) && (i != k))
                {
                    if ((nums[i] + nums[j] + nums[k]) == 0)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    int nums[] = {0, 1, 1};
    int size = sizeof(nums) / sizeof(int);
    if (threeSum(nums, size))
    {
        cout << "triplet exist" << endl;
    }
    else
    {
        cout << "triplet does not exist" << endl;
    }
    return 0;
}
