/*

Example
Input:
2
3
1 2 3
2
42 42

Output:
3
0
Explanation
Example Case 1. Chief can equalize all salaries in 3 turns:

Turn  ID	 IDs of involved workers	Salaries after the move
  1	  1           2	                        2 3 3
  2	  1           2	                        3 4 3
  3	  1           3	                        4 4 4


*/


#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int t,n,a,i,sum=0,Min,j;
    cin>>t;
    for(j=0;j<t;j++){
    sum=0;
    Min=INT_MAX;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a;
            if(a<Min)
                Min=a;
            sum+=a;
        }
        cout<<sum-Min*n<<endl;

    }

    return 0;
}
