/*Count total set bits in all numbers from 1 to N | Set 3*/

#include <iostream>
#include <string>
#include<algorithm>


using namespace std;


void compress(int a[],int n)
{
    string s;
    int len=0,i,c=0;
    s[len++]=a[0]+'0';
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1]+1  &&  )
        {
            if(c!=3)
            {
                s[len++]='.';
                c++;
            }
        }
        else{
            s[len++]=a[i-1]+'0';
            s[len++]=a[i]+'0';
            c=0;
        }
        cout<<s[len-1]<<" ";
    }
    s[len++]='\0';
        cout<<len;
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    int n[t+1],a[t+1][100],i,j;
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        for(j=0;j<n[i];j++)
            cin>>a[i][j];
    }
    for(i=0;i<t;i++)
        compress(a[i],n[i]);

	return 0;
}



/*
bool comp(int a, int b)
{
    return (a << b);
}

int main()
{
    //int a[]={1,7,3,5,6,10};
    //int *i;
   // i=max_element(a,a+6,comp);

    //cout<<a[i-&a[0]];
    int a=0;
    a=a|4;
    a=a|2;
    a=a|1;
    cout<<a;
}*/

/*
int count(int n)
{
    int dp[n+1],sum=0,i;
    dp[0]=1;
    dp[1]=1;
    for(i=2;i<=n;i++)
    {
        if(i%2==0){
            dp[i]=dp[i/2];
        }
        else
        {
            dp[i]=dp[i-1]+1;
        }
    }


    for(i=1;i<=n;i++)
        sum+=dp[i];

    return sum;
}


int main()
{

    int a;
	cin>>a;
	cout<<count(a);
	return 0;
}*/
