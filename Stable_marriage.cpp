#include <iostream>

using namespace std;

int Min(int a[],int n)
{
    int m,i=0;
    while(a[i]==0)
        i++;
    m=i;
    for(;i<n;i++)
        if(a[i]!=0 && a[i]<a[m])
            m=i;
    return m;
}

void stable_marriage(int b[100][100],int g[100][100],int n,int gg[],int q)
{
    int G[n+1][2],B[n+1],c=0,i;
    for(i=0;i<n;i++){
        B[i]=0;
        G[i][0]=-1;
        G[i][1]=0;
    }
    i=0;
    while(c!=n)
    {
        while(B[i]!=0)
            i=(i+1)%n;
        int gl=Min(b[i],n);
        G[gl][1]+=1;
        if(G[gl][0]==-1)
        {
            B[i]=1;
            c++;
            G[gl][0]=i;
        }
        else
        {
            int prev=G[gl][0];
            if(g[prev][gl]>g[i][gl])
            {
                B[prev]=0;
                b[prev][gl]=0;
                G[gl][0]=i;
                B[i]=1;
            }
        }
        if(B[i]==0)
            b[i][gl]=0;
    }
    for(i=0;i<q;i++)
        cout<<G[gg[i]-1][1]<<endl;
}

int main()
{
    int b[100][100],g[100][100],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>b[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>g[i][j];
    int q;
    cin>>q;
    int gg[q+1];
    for(i=0;i<q;i++)
        cin>>gg[i];
    stable_marriage(b,g,n,gg,q);
    return 0;
}
