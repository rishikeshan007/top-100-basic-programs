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
        cout<<n<<" ";
    }
}
int main()
{
    int start;
    cout<<"starting number"<<endl;
    cin>>start;
    int end;
    cout<<"ending number"<<endl;
    cin>>end;
    for(int i=start;i<=end;i++)
    {
        prime(i);
    }
}
