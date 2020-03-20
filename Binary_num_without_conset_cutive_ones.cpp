#include <iostream>

using namespace std;

int c=0;

void binaryseq(int last,char* out,int start,int eend)
{
    if(start>eend)
    {
        cout<<out<<endl;
        return;
    }

    if(last==1)
    {
        out[start]='0';
        binaryseq(0,out,start+1,eend);
    }
    else
    {
        out[start]='0';
        binaryseq(0,out,start+1,eend);
        out[start]='1';
        binaryseq(1,out,start+1,eend);
    }
}

int main()
{
    int n;
    cin>>n;
    char out[2*n+1];
    out[2*n]='\0';
    binaryseq(0,out,0,2*n-1);
    return 0;
}
