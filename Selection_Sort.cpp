//Selection Sort Algorithm 

#include <iostream>

using namespace std;

int selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
        }
    }
    return 0;
};


int main()
{
    cout<<"\t\tSelection Sort \n"<<endl;
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
    selection_sort(arr,n); 
     
    //Displaying Sorted array 
    cout<<"\nSorted Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

return 0;
}