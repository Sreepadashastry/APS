#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;


int last_pers(int n)
{
    int l=ceil(log(n)/log(2));
    if(n!=1 && (n&(n-1))==0)
        l=l+1;
    int diff=n-pow(2,l-1);
    return 2*diff+1;
}

int main()
{
    int n;
    cin>>n;
    cout<<last_pers(n);
    return 0;
}
