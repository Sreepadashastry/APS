/*
Over a given N men and women, each women indicates her choice of preferences. A women can also indicate -1 saying she is not interested in anyone anymore. However, each women has to give N preferences and atleast one valid preference.

The task is to identify all single men (men who were not preferred by any).

input:
3
1 2 -1
1 -1 -1
2 -1 -1

output:
3
Explanation 0
There are 3 men and women. The first line indicates three preferences of women number 1 and so on.
Man with id 3 was not preferred by any. Hence the result is 3.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a[11][11],i,j,m[11],flag=0;
    m[0]=0;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]!=-1){
                m[a[i][j]-1]+=1;
               
            }     
        }
    for(i=0;i<n;i++)
        if(m[i]==0){
            cout<<i+1<<endl;
            flag=1;
        }
            
            
    
    if(flag==0)
        cout<<"-1"<<endl;
    
        
    return 0;
}
