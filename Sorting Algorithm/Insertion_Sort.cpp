#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
      int i, j, key;
      for (j = 1; j < n;j++)
      {
            key = arr[j];
            i = j - 1;
            while(i>=0 && key<=arr[i])
            {
                  arr[i + 1] = arr[i];
                  i = i - 1;
            }
            arr[i + 1] = key;
      }
}
int main()
{
      int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
      insertionSort(arr, n);

      // Printing an Sort Array;
      cout << "Sorted Array using Insertion Sort" << endl;
      for (int i = 0; i < n;i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}

/*
Output:

Sorted Array using Insertion Sort
11 12 22 25 34 64 90 
*/