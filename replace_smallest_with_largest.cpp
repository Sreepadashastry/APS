#include <iostream>

using namespace std;




int main()
{
    int a[20][20],i,j,r,c,large,small;
    cin>>r>>c;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
    large=small=a[0][0];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        if(a[i][j]>large)
        {
             large=a[i][j];
        }
        if(a[i][j]<small)
        {
             large=a[i][j];
        }
    }

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        if(a[i][j]==small)
            a[i][j]=large;

    for(i=0;i<r;i++)
    {
            for(j=0;j<c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
