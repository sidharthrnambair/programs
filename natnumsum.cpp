#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int sum=0;
    cout<<"Enter the n natural number\n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"SUm is"<<endl<<sum;
    return 0;
}