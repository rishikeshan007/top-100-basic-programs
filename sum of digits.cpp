#include<iostream>
using namespace std;
void sum(int n)
{
    int total=0;
    while(n!=0)
    {
        int rem=n%10;
        total=total+rem;
        n=n/10;
    }
    cout<<"the sum of numbers is:"<<total;
    
}
int main()
{
    int n;
    cin>>n;
    sum(n);
}
