// Program for implementation of Heap Sort

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i; 
	int l = 2 * i + 1; 
    int r = 2 * i + 2;

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;


    // If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursive call 
		heapify(arr, n, largest);
	}
}

// main function for sort
void heapSort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);


	for (int i = n - 1; i > 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}



int main()
{
    cout<<"\t\tHeap Sort \n"<<endl;
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
    heapSort(arr1,n);

    //Displaying Sorted array
    cout<<"\nSorted Array   : ";
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;

    return 0;
	
}
