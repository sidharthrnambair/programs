#include<iostream>
using namespace std;
int main()
{   int n,num,digit;
int rev=0;
    cout<<"Enter the number\n";
    cin>>n;
    num=n;

    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    cout<<"reversed number is\n"<<rev;
    return 0;
}