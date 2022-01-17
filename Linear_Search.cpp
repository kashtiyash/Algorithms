//Code to linearly search elements in an array.

#include<iostream>
using namespace std;

int Linear_search(int arr[],int x,int num)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i]==num)
            return i;

    }
    return -1;
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int search_element;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nEnter the Element to search : ";
    cin>>search_element;
    

    int result = Linear_search(arr,n,search_element);
    (result == -1)
            ? cout<<"\nElement is not present in array"
            : cout << "\nElement is present at index " << result;
        return 0;
}