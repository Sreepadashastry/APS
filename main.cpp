#include <iostream>

using namespace std;

typedef struct
{
    int u,v,edge;
}node;

int Find(int arr[],int i,int j)
{
    if(arr[i]==arr[j])
        return 1;
    return 0;
}

void Union(int arr[],int n,int u,int v)
{
    int x=arr[v];
    int y=arr[u];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==y)
            arr[i]=x;
    }
}

void Swap(node arr[],int i,int j)
{
    node t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}

void heapify(node arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l].edge>arr[largest].edge)
        largest=l;
    if(r<n && arr[r].edge>arr[largest].edge)
        largest=r;
    if(largest!=i)
    {
        Swap(arr,i,largest);
        heapify(arr,n,largest);
    }
}

void heapsort(node arr[],int n)
{
    int i;
    for(i=(n/2)-1;i>=0;i--)
        heapify(arr,n,i);

    for(i=n-1;i>=0;i--)
    {
        Swap(arr,0,i);
        heapify(arr,i,0);
    }
}

void display(node a)
{
    cout<<a.u<<" "<<a.v<<" "<<a.edge<<endl;
}
void kruskal(node arr[],int n)
{
    int i,len=0;
    node dp[n+1];
    int a[n+1];
    for(i=0;i<=n;i++)
        a[i]=i;
    for(i=0;i<n;i++)
    {
        if(Find(a,arr[i].u,arr[i].v))
            continue;
        else
        {
            dp[len++]=arr[i];
            Union(a,n,arr[i].u,arr[i].v);
        }
        if(len==n-1)
            break;
    }
    for(i=0;i<len;i++)
        display(dp[i]);
    int sum=0;
    for(i=0;i<len;i++)
        sum+=dp[i].edge;
    cout<<"Weight of minimum spanning tree:"<<sum<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    node points[n+1];
    for(i=0;i<n;i++)
    {
        cin>>points[i].u>>points[i].v>>points[i].edge;
    }
    heapsort(points,n);
    kruskal(points,n);

    return 0;
}
/*
sample input:
14
0 1 8
0 7 16
1 7 22
7 8 14
1 2 16
8 2 4
7 6 2
8 6 12
6 5 4
2 5 8
2 3 14
5 3 28
5 4 20
3 4 18
sample output:
7 6 2
6 5 4
8 2 4
0 1 8
2 5 8
2 3 14
1 2 16
3 4 18
Weight of minimum spanning tree:74
*/
