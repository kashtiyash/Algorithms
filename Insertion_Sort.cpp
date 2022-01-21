#include<iostream>
using namespace std;

int insertion_sort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
return 0;
}

int main()
{
     cout<<"\t\tInsertion Sort \n"<<endl;
    int n;
    cout<<"Enter size of array : ";
    cin >> n;
    
    int arr[n];
    for (int i=0;i<n;i++ )
    {
        cout<<"Enter ["<<i+1<<"] element : ";
        cin>>arr[i];
    }

    //displaying Unsorted array 
    cout<<"\nUnsorted Array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    //function call
    insertion_sort(arr,n); 
     
    //Displaying Sorted array 
    cout<<"\nSorted Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;


return 0;
}