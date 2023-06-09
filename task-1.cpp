#include <iostream>

using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"================"<<endl;
}

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<val)
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=val;
        printArray(arr,n);

    }
}

int main()
{
    int arr[]={30,40,50,60,1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted:"<<endl;
    printArray(arr,size);

    insertionSort(arr,size);

    cout<<"Sorted:"<<endl;
    printArray(arr,size);

    return 0;
}
