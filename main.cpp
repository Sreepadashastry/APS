#include <iostream>

using namespace std;

int main()
{
    int n,a=1,i,num;
    cin>>n;
    cout<<a<<" ";
    for(i=2;i<=n;i++)
    {
        num=a*(2*(2*i-1)/(i+1));
        cout<<num<<" ";
        a=num;
    }
    return 0;
}
