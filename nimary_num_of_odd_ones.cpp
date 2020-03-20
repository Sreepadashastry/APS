#include <iostream>

using namespace std;

void oddnumseq(int odd,char * out,int start,int eend)
{
    if(start>eend)
    {
        if(odd%2==1)
            cout<<out<<endl;
        return;
    }

    out[start]='0';
    oddnumseq(odd,out,start+1,eend);
    out[start]='1';
    oddnumseq(odd+1,out,start+1,eend);
}

int main()
{
    int n;
    cin>>n;
    char out[2*n+1];
    out[2*n]='\0';
    oddnumseq(0,out,0,2*n-1);
    return 0;
}
