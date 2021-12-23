//if n is reversed the reversed number should be same is called palindrome

#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,temp;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        int rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(temp==reverse)
    {
        cout<<temp<<"is a palindrome"<<endl;
    }
    else
    {
        cout<<temp<<"is not a palindrome"<<endl;
    }
}
