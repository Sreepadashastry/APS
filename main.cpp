#include <iostream>

using namespace std;

void Generate(int n,int sum,char* out,int ind,int x,int y)
{
    if(sum<0)
        return;
    if(x==n && y==n)
    {
        if(sum==0)
        {
            for(int i=0;i<ind;i++)
                cout<<out[i];
            cout<<endl;
            return;
        }
        else
            return;
    }
    out[ind]='X';
    if(x+1<=n)
        Generate(n,sum+1,out,ind+1,x+1,y);
    out[ind]='Y';
    if(y+1<=n)
        Generate(n,sum-1,out,ind+1,x,y+1);

}

int main()
{
    int n;
    char out[10000];
    cin>>n;
    Generate(n,0,out,0,0,0);
    return 0;
}
