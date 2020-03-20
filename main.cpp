#include <iostream>

/*

Moby has stepped out to make some purchases in national market. He is carrying a bag with him which can hold goods till certain capacity. His aim is to look out for all the items and fill his bag with most profitable items.

Input Format

First line contains N items and next N lines contain the item weight w and its value v. After that, the next line contains the Mobys bag capacity C.

Sample Input 0

4
2 12
1 10
3 20
2 15
5
Sample Output 0

37

*/

using namespace std;


// C++ Program to print all combination of
// size r in an array of size n
#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];

   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
    for(i=0;i<=n;i++)
        for(w=0;w<=W;w++)
            cout<<K[i][w]<<" "<<i<<" "<<w<<endl;
   return K[n][W];
}

int main()
{
    int n;
    cin>>n;
    int v[n],w[n],i,maxv,j,k,sum,sum1,large=0;

    for(i=0;i<n;i++)
    {
        cin>>w[i]>>v[i];
    }
    cin>>maxv;
    cout<<knapSack(maxv, w, v, n);


    return 0;
}
