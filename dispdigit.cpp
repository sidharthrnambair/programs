#include<iostream>
using namespace std;
int main()
{
    int n,digit,i;
    cout<<"Enter the number\n";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        cout<<digit<<"\t ";
       
    }
    return 0;
}