#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

void fastscan(int &x)
{
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
}

int main()
{
    fastread();
    int t;
    fastscan(t);
    while(t--)
    {
        int x,y,n,k=0;
        fastscan(x);
        fastscan(y);
        fastscan(n);
        
        k=(n/x)*x+y;
        if(k>n){
            k-=x;
        }
        cout<<k<<endl;
    }
}