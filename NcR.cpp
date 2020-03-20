#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int bc(int n,int k)
{
    if(k==0 || n==k)
    {
        return 1;
    }
    return (bc(n-1,k-1)+bc(n-1,k));
}

int bc1(int n,int k)
{
    int x,i,j,c[n+1][k+1];
    for(i=0;i<=n;i++){
        x=min(i,k);
        for(j=0;j<=x;j++)
        {
            if(j==0 || i==j)
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }

    return c[n][k];
}

int bc2(int n,int k)
{
    int c[n+1],i,j,x;

    c[0]=1;
    for(i=1;i<n;i++)
        c[i]=0;
    for(i=1;i<=n;i++)
    {
        x=min(i,k);
        for(j=x;j>0;j--)
            c[j]=c[j]+c[j-1];
    }

    return c[k];
}

int main()

{
    int n,k;
    cin>>n>>k;
    cout<<bc2(n,k);
    return 0;
}
