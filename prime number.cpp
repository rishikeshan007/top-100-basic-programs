/*if number should be divided only by 1 and the number is called prime */

#include<iostream>
using namespace std;
void prime(int n)
{
    int count=0;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        cout<<n<<" "<<"is  a prime number"<<endl;
    }
    else
    {
        cout<<n<<" "<<"is  not a prime number"<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}
