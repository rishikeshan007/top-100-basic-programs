#include<iostream>
using namespace std;
void leap(int year)
{
    if(((year%4==0)and(year%100!=0))or(year%400==0))
    {
        cout<<year<<"is a leap year"<<endl;
    }
    else
    {
        cout<<year<<"not a leap year"<<endl;
    }
}
int main()
{
    int year;
    cin>>year;
    leap(year);
    
    
}
