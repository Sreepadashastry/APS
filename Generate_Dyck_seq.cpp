#include <iostream>

using namespace std;
void dyck(char out[],int n,int ind,int sum)
{
    if(ind==n && sum==0)
    {
        for(int i=0;i<ind;i++)
            cout<<out[i]<<" ";
        cout<<endl;
        return;
    }
    else if(ind==n)
    {
        return;
    }

    out[ind]='Y';
    dyck(out,n,ind+1,sum+1);
    if(sum-1>=0)
    {
        out[ind]='X';
        dyck(out,n,ind+1,sum-1);
    }
}

int main()
{
    int n;
    char out[200];
    cin>>n;
    dyck(out,2*n,0,0);
    return 0;
}
