#include <iostream>

using namespace std;

int dp[20]={0};

void display(int num,int n,int a[],int out[],int ind)
{
    for(int i=0;i<n;i++)
    {
        if(num-a[i]>0 && dp[num-a[i]]!=0)
        {
            dp[num]-=1;
            out[ind]=a[i];
            display(num-a[i],n,a,out,ind+1);
        }
        else if(num-a[i]==0 && dp[num-a[i]]!=0)
        {
            cout<<"*"<<i<<" ";
            for(int j=0;j<ind;j++)
                cout<<out[j]<<" ";
            cout<<a[i]<<endl;
        }
    }

}

void reach_n(int num,int n,int a[])
{
    int i,j,out[num+3];
    dp[0]=1;

    for(i=0;i<n;i++)
    {
        for(j=a[i];j<=num;j++)
        {
            dp[j]=dp[j-a[i]]+dp[j];
        }
    }
    display(num,n,a,out,0);
   /* for(i=0;i<=num;i++)
        cout<<dp[i]<<" ";*/
    //return dp[num];
}

int main()
{
    int num,n;
    cin>>num>>n;
    int a[n+1],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    reach_n(num,n,a);


    return 0;
}
