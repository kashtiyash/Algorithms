#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    int k = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);

    }
    
    int count[100]={0};
    
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;

    }

    for (int i = 1; i <= k ; i++)
    {
        count[i] += count[i-1];
    }
    
    int output[n];
    for (int i = n-1; i >= 0 ; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    
    
}


int main()
{
    cout<<"\t\tCount Sort \n"<<endl;
    int n;
    cout<<"Enter size of array : ";
    cin >> n;

    int arr1[n];
    for (int i=0;i<n;i++ )
    {
        cout<<"Enter ["<<i+1<<"] element : ";
        cin>>arr1[i];
    }

    //displaying Unsorted array
    cout<<"\nUnsorted Array : ";
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;

    //function call
    countSort(arr1, n);

    //Displaying Sorted array
    cout<<"\nSorted Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;

    return 0;
}