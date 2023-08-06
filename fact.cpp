#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int fact=1;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is \n"<<fact;
    return 0;
}