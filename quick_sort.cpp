#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pIndex = start - 1;

    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            pIndex++;
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
        }
    }

    int temp = arr[pIndex + 1];
    arr[pIndex + 1] = arr[end];
    arr[end] = temp;

    return pIndex + 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);

        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = 6;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

