#include<iostream>
using namespace std;
int main()
{   int n,m,r;
int sum=0; 

    cout<<"Enter the number\n";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    {
        cout<<"IT is AMSTRONG\n";
    }
    else
    cout<<"NOt amstrong";
    return 0;
}