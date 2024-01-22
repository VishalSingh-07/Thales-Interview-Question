#include <bits/stdc++.h>
using namespace std;

class Solution
{
      public:
      void merge(int arr[], int l, int m, int r)
      {
         // Your code here
            int temp[r-l+1];
            int pos=0,i=l,j=m+1;
            while(i<=m and j<=r)
            {
                  if(arr[i]<=arr[j])
                  {
                        temp[pos++]=arr[i++];
                  }
                  else
                  {
                        temp[pos++]=arr[j++];
                  }
            }
            while(i<=m)
            {
                  temp[pos++]=arr[i++];
            }
            while(j<=r)
            {
                  temp[pos++]=arr[j++];
            }
            for(int i=0;i<pos;i++)
            {
                  arr[i+l]=temp[i];
            }
      }
      public:
      void mergeSort(int arr[], int l, int r)
      {
          //code here

            if(l<r)
            {
                  int mid=l+(r-l)/2;
                  mergeSort(arr,l,mid);
                  mergeSort(arr,mid+1,r);
                  merge(arr,l,mid,r);
            }

      }
};

int main() 
{
      Solution solution;
      int arr[] = {12, 11, 13, 5, 6, 7};

      // Calculate the size of the array
      int arr_size = sizeof(arr) / sizeof(arr[0]);

      cout << "Original array: "<<endl;
      for (int i = 0; i < arr_size; i++) 
      {
          cout << arr[i] << " ";
      }
      cout << endl;

      // Perform merge sort
      solution.mergeSort(arr, 0, arr_size - 1);

      cout << "Sorted array: ";
      for (int i = 0; i < arr_size; i++) 
      {
            cout << arr[i] << " ";
      }
      cout << endl;
      return 0;
}


/*
Output:

Original array: 
12 11 13 5 6 7 
Sorted array: 5 6 7 11 12 13 

*/