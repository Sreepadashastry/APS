#include <iostream>
# include<bits/stdc++.h>
using namespace std;



void ugly_no(int n)
{
    int dp[n],i,i2,i3,next_ugly_no=1,i5,next_2mul,next_3mul,next_5mul;
    i2=i5=i3=0;
    dp[0]=1;
    next_2mul=2;
    next_3mul=3;
    next_5mul=5;
    for(i=1;i<=n;i++)
    {
        next_ugly_no=min(min(next_2mul,next_3mul),next_5mul);
        dp[i]=next_ugly_no;
        if(next_ugly_no==next_2mul){
            i2+=1;
            next_2mul=dp[i2]*2;
        }
        if(next_ugly_no==next_3mul){

            i3+=1;
            next_3mul=dp[i3]*3;
        }
        if(next_ugly_no==next_5mul)
        {

            i5+=1;
            next_5mul=dp[i5]*5;
        }
    }
    for(i=0;i<n;i++)
    cout<<dp[i]<<" ";

}

int main()
{
    int n;
    cin>>n;
    ugly_no(n);
    return 0;
}
