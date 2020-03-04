#include <bits/stdc++.h>
using namespace std;

int kadane_1d(int arr[],int size)
{
    int max_so_far=INT_MIN,max_ending=0,i;
    for(i=0;i<size;i++)
    {
        max_ending=max_ending+arr[i];
        if(max_so_far<max_ending)
            max_so_far=max_ending;
        if(max_ending<0)
            max_ending=0;
    }
    return max_so_far;
}

int main() {
    int t;
    cin>>t;
	int n,arr[100000];
	while(t--){
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	cout<<kadane_1d(arr,n)<<endl;}
	return 0;
}
