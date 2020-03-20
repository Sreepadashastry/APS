#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
    int x,y,max=r,bit=0,num=0,maxi=0,i,j;
    if(l>r)
        max=l;
    for(i=l;i<=r;i++)
        for(j=l;j<=r;j++){
    for(bit=0;pow(2,bit)<max;bit++)
    {
        x=i & (1<<bit);
        y=j & (1<<bit);
        if(x!=y)
        {
            num=num | (1<<bit);
        }
    }
            if(max<num)
                max=num;
        }
    return num;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}
