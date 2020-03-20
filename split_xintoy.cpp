#include <iostream>
#include<math.h>

using namespace std;

int check_bin(int x)
{
    int i;
    if(x==1)
        return 1;
    for(i=0;i<16;i++)
        if((x%int(pow(2,i+1)))==0)
            return 1;
    return 0;
}

int divide(int x,int y)
{
    int r,d,i,a[1000],n=0,flag=0;
    d=x/y;
    r=x%y;
    for(i=0;i<r;i++)
        a[n++]=d+1;
    for(i=0;i<y-r;i++)
        a[n++]=d;
    /*for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;*/
    for(i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
            if(!check_bin(a[i]))
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
        return 0;
    else
        return 1;
}

int logic(int a[],int n,int x,int y)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]*y==x)
            return 1;


}





void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r)
{

    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data[j] << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= end &&
        end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1,
                        end, index+1, r);
    }
}

void printCombination(int arr[], int n, int r)
{
    int data[r];

    combinationUtil(arr, data, 0, n-1, 0, r);
}

int main()
{
    int i=0,num,a[1000],n=0,x,y;
    cin>>x>>y;
    while(1)
    {
        num=pow(2,i);
        if(num<x)
            a[n++]=num;
        else
            break;
        i++;
    }
    for(i=0;i<n;i++)
        cout<<a[i];
    printCombination(a, n, y);

   /* int X[100],x,y,Y[100],test,i,j;
    cin>>test;
    for(j=0;j<test;j++)
        cin>>X[j]>>Y[j];
    for(j=0;j<test;j++)
    {
        x=X[j];
        y=Y[j];
        if(x<1 || y<1 || y>x)
            cout<<"NO"<<endl;
        else
        {

            if(divide(x,y))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }*/
    return 0;
}
