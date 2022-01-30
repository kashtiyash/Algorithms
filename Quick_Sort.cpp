#include<iostream>
using namespace std;

void swap(int arr[], int i,int j)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partion(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i=l-1;

    for (int j = l; j < r; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);

        }
    }
    swap(arr,i+1,r);
    return i + 1;
    
}

void quicksort(int arr[], int l, int r){
    if(l<r)
    {
        int pi = partion(arr, l, r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}


int main()
{
    cout<<"\t\tQuick Sort \n"<<endl;
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
    quicksort(arr,0,n-1);
 
     
    //Displaying Sorted array 
    cout<<"\nSorted Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}