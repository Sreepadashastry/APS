#include <iostream>

using namespace std;

void sumtriangle(int a[],int n)
{
    if(n<1)
        return;

    int temp[n],i;
    for(i=0;i<n-1;i++)
    {
        temp[i]=a[i]+a[i+1];
    }

    sumtriangle(temp,n-1);

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sumtriangle(a,n);
    return 0;
}
