//
// Created by Macbook on 13.11.17.
//

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = * b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(&arr[++i],&arr[j]);
        }
    }

    swap(&arr[high], &arr[++i]);
    return i;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main()
{
    int a[] = {7,8,6,5,9,3,4,5,1,2};
    int len = (sizeof(a)/sizeof(a[0]));
    quickSort(a, 0, len - 1);

    printArray(a, 10);
}




