/*

Given a number n, find all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.

Input:  N = 2
Output:
0101 1111 1001 0110 0000 1010

Input:  N = 3
Output:
011011 001001 011101 010001 101011 111111
110011 101101 100001 110101 001010 011110
010010 001100 000000 010100 101110 100010
110110 100100


*/

#include <iostream>

using namespace std;


void sequences(int diff,char* out,int start,int eend)
{
    if(diff>(eend-start+1)/2 ||  (diff*-1)>(eend-start+1)/2)
        return;

    if(start>eend)
    {
        if(diff==0)
            cout<<out<<endl;
        return;
    }

    out[start]='0',out[eend]='0';
    sequences(diff,out,start+1,eend-1);
    out[start]='1',out[eend]='1';
    sequences(diff,out,start+1,eend-1);
    out[start]='1';
    out[eend]='0';
    sequences(diff+1,out,start+1,eend-1);
    out[start]='0';
    out[eend]='1';
    sequences(diff-1,out,start+1,eend-1);

}

int main()
{
    int n;
    cin>>n;
    char out[2*n+1];
    out[2*n]='\0';
    sequences(0,out,0,2*n-1);
    return 0;
}
