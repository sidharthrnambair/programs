#include<iostream>
using namespace std;
int main()
{
    int num,digit,n;
    int rev=0;

    cout<<"Enterr the number\n";
    cin>>num;
    n=num;
    while(num!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;

    }
    if(rev==n)
    cout<<"It is palindrome\n";
    else 
    cout<<"NOT A PALINDROME";
    return 0;
}