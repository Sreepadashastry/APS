#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
void heaps(int h[],int n)
{
    int i,k,v,j;
    bool heap;
    for(i=n/2;i>0;i--)
    {
        k=i;
        v=h[i];
        heap=false;
        while(!heap && 2*k<=n)
        {
            j=2*k;
            if(j<k)
                Swap(h,j,j+1);
            if(v<=h[j])
            {
                heap=true;
            }
            else{
                h[k]=h[j];
                k=j;
            }
        }
        h[k]=v;
    }
}
*/

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
