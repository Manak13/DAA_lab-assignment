#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = arr[0];

    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;

        for (int j = i; j < n; j++)
        {
            currentSum = currentSum + arr[j];

            if (currentSum > maxSum)
                maxSum = currentSum;
        }
    }

    return maxSum;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    cout << maxSubarraySum(arr, n);

    return 0;
}
