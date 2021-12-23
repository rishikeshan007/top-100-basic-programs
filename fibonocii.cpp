#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int fib=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<a<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<b<<" ";
            continue;
        }
        fib=a+b;
        a=b;
        b=fib;
        cout<<fib<<" ";
    }
}
