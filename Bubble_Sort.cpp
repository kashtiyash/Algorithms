//Bubble Sort Algorithm 

#include <iostream>
using namespace std;

int bubble_sort(int arr[],int n)
{
    int counter =1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    
            }
            
        }
        counter++;
    }
    return 0;
};


int main()
{
    cout<<"\t\tBubble Sort \n"<<endl;
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
    bubble_sort(arr,n); 
     
    //Displaying Sorted array 
    cout<<"\nSorted Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

return 0;
}

