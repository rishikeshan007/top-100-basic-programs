#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem;
    int res=0;
    while(n>0)
    {
        rem=n%10;
        res=res+rem*rem*rem;
        n=n/10;
        
    }
    cout<<res;
    if(res==n)
    {
        cout<<n<<"is an amstrong number"<<endl;
    }
    else
    {
        cout<<n<<"is not an amstrong number"<<endl;
    }
}
