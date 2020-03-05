#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int size,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<size && arr[l]>arr[largest])
        largest=l;
    if(r<size && arr[r]>arr[largest])
        largest=r;

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,size,largest);
    }
}

void heapSort(int arr[],int size)
{
    for(int i=size/2-1;i>=0;i--)
        heapify(arr,size,i);

    for(int i=size-1;i>=0;i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}

int main()
{
    int a[6]={1,5,3,6,11,2};
    heapSort(a,6);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";

    return 0;
}
