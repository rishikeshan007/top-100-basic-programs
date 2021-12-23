/*Strong Number.

For Example:145

Sum of factorial of digits of number   = 1! x 4! x 5=  145


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int total=0;
    
    while(n)
    {
        int fact=1;
        int rem=n%10;
        
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        total=total+fact;
        n=n/10;
    }
    if(total==temp)
    {
        cout<<temp<<"is strong"<<endl;
    }
    else
    {
        cout<<n<<"is not strong"<<endl;
    }
}
