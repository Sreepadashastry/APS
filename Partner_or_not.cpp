/*
N men and N women give their partner preferences with respect to each other. The task is to find out how many proposals did person P get.

Input Format
First line indicates that there are N men and women followed by two matrices one for men with respect to women and vice-versa.
Then in the next line is Q queries followed by Q lines indicating person id P for whom the number of proposals need to be calculated.
Refer sample test case for detailed description.

Sample Input 0

3
2 1 3
3 1 2
3 2 1
3 2 3
1 3 1
2 1 2
1
2
Sample Output 0

3
Explanation 0

The first number 3 indicates that there are 3 men and women. 
The first 3 x 3 matrix is men's preferences over women and second 3 x 3 matirx is women's preferences over men.
Followed in the next line indicating Q, the number of queries (which in this case is 1).
The next number 2 indicates that we need to know how many proposals were made for women 2 in the process.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct person
{
    int a[10],pros=0,match=-1;
}pers;



int match(int arr[10][10][2],int i,int n)
{
    int j,prev=-1;
    for(j=0;j<n;j++)
    {
        if(arr[i][j][1]==1)
        {
            if(prev==-1)
                prev=j;
            else
            {
                if(arr[i][j][0]<arr[i][prev][0])
                    prev=j;
            }
        }
    }
    return prev;
}

int main() {
    int i,j,n,t,g[10],c=0,max;
    int arr[10][10][2],prop[10];
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j][0];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j][1];
    
    cout<<match(arr,1,n)<<endl;
    
    for(i=0;i<n;i++)
    {
        max=-1
        for(j=0;j<n;j++)
        {
            if(arr[j][i][1]==1)
        }
    }
        
    
   /* cin>>t;
    for(i=0;i<t;i++)
        cin>>g[i];
    
     for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<arr[i][j][0]<<","<<arr[i][j][1]<<" ";
        cout<<endl;
    }
    */
    

    /*for(i=0;i<t;i++)
        cout<<girl[g[i]-1].pros<<endl;*/
    
   
    
    return 0;
}
