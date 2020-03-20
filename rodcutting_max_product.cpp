#include <iostream>

using namespace std;

int Max(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    if(b>c && b>a)
        return b;
    return c;
}

int rod_cutting(int n)
{
    int j,i,result[n+2]={0};


    for(i=2;i<=n;i++){

        for(j=1;j<=i/2;j++){
            result[i]=Max(result[i],j*(i-j),j*result[i-j]);
        }

    }
    return result[n];

}
int main()
{
    int n;
    while(1){
    cin>>n;
    cout<<rod_cutting(n)<<endl;}
    return 0;
}
