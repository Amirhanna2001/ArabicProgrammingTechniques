#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
    int pi = arr[high];
    int i = low-1;

    for(int j=low;j<high;++j)//n
    {
        if(arr[j]<pi){
            ++i;
            swap(arr[j],arr[i]);

        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void QuickSort(int arr[],int low ,int high)
{
    if(high <= low)
        return;

    int pivot = partition(arr,low,high);

    QuickSort(arr,low,pivot-1);
    QuickSort(arr,pivot+1,high);
}

void printArr(int arr[],int n)
{
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";

        cout<<'\n';
}
int main()
{
    int arr[7] = {60,49,3,78,22,10,70};
    cout<<"Array Before Sorting\n";
   printArr(arr,7);

   QuickSort(arr,0,7);

    cout<<"Array After Sorting\n";
   printArr(arr,7);
     return 0;
}


