#include <iostream>

using namespace std;

int week_day(long y)
{
    y=y-1;
    int m=14;
    int d=1;
    long w=d + 2*m + (3*(m+1)/5) + y + (y/4) - (y/100) + (y/400) + 2;
    return w%7;
}

int leap(long y)
{
    if(y%100==0){
        if(y%400==0)
            return 1;
        else
            return 0;}
    if(y%4==0)
        return 1;
    return 0;
}

int check(long w,int l)
{
    if(w==1)
    {
        if(l)
            return 0;
        else
            return 1;
    }
    else if(w==0)
    {
        return 1;
    }
    else
        return 0;
}


long compute(long y)
{
    long c=0,x,res,base,w;
    if(y>499)
    {
        x=(y-99)/400;
        res=25+100*x+x;
        base=99+400*x+1;
    }
    else if(y>99)
    {
        res=25;
        base=100;
    }
    else
    {
        res=0;
        base=1;
    }

    w=week_day(base);
    for(;base<=y;base++)
    {

        x=leap(base);
        if(check(w,x))
        {
            c++;
        }
       if(x)
            w=(w+2)%7;
        else
            w=(w+1)%7;
    }
    return c+res;

}


int main()
{
    int t;
    cin>>t;
    while(t--){
    long y1,m1,m2,y2,x,l,X1,X2,flag=0,w,result;
    cin>>m1>>y1>>m2>>y2;
    if(m1>2)
        y1++;
    if(m2<2)
        y2--;
    int c=0;
    X1=compute(y1);
    X2=compute(y2);

    w=week_day(y1);
    x=leap(y1);
    if(check(w,x))
    {
        flag=1;
    }
    result=X2-X1;

    if(flag==0)
        cout<<result<<endl;
    else
        cout<<result+1<<endl;
    }
    return 0;
}
