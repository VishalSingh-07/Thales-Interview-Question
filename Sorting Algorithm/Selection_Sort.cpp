// C++ program for implementation of selection sort 

#include <bits/stdc++.h> 
using namespace std; 

// Function for Selection sort 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_index; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n - 1; i++) 
      { 
            // Find the minimum element in 
		// unsorted array 
		min_index = i; 
		for (j = i + 1; j < n; j++) 
            { 
			if (arr[j] < arr[min_index])
                  {
                        min_index = j; 
                  } 	
		} 

		// Swap the found minimum element 
		// with the first element 
		if (min_index != i)
            {
                  swap(arr[min_index], arr[i]); 
            }		
	} 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
      { 
		cout << arr[i] << " "; 
	} 
} 

// Driver program 
int main() 
{ 
	int arr[] = { 64, 25, 12, 22, 11 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function Call 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 

/*
Output:

Sorted array: 
11 12 22 25 64 
*/
