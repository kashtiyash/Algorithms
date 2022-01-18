/*  for binary search array should be sorted in order otherwise this algorithm will not work  */

#include <iostream>  
using namespace std; 

int binarySearch(int arr[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {  
        mid = (beg + end)/2;    
                                /* if the item to be searched is present at middle */  
        if(arr[mid] == val)    
        {                 
            return mid+1;    
        }    
                                /* if the item to be searched is smaller than middle, then it can only be in left subarray */  
        else if(arr[mid] < val)     
        {  
            return binarySearch(arr, mid+1, end, val);    
        }    
                                /* if the item to be searched is greater than middle, then it can only be in right subarray */      
    else     
        {  
            return binarySearch(arr, beg, mid-1, val);    
        }         
    }    
    return -1;     
}  

int main()
{  
  int a[] = {10, 12, 24, 29, 39, 40, 51, 56, 70};    // given sorted array  
  int val;
  int n = sizeof(a) / sizeof(a[0]);                  // size of array  
  
  
  cout<<"The elements of the array are : ";  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";    
  
  cout<<"\nEnter the Value to be searched : ";
  cin >> val;   
  
  int result = binarySearch(a, 0, n-1, val);         // Store result  
  
  if (result == -1)  
  cout<<"\nElement ["<<val<<"] is not present in the array";  
  else  
  cout<<"\nElement ["<<val<<"] is present at "<<result<<" position of array";  
  return 0;  
}  