#include<iostream>
#include<cmath>
using namespace std;
void power(int base,int exponent)
{
    int result=pow(base,exponent);
    cout<<result;
    
}
int main()
{
    int base;
    int exponent;
    cin>>base;
    cin>>exponent;
    power(base,exponent);
}
