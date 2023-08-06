#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int sum=0;
    cout<<"enter the number\n";
    cin>>n;
    // for(i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         sum=sum+i;
    //     }
    // }
    // if(n+1==sum)
    // {
    //     cout<<"It is prime number\n";
    // }
    // else
    // cout<<"not prime";
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
        else{
            cout<<"prime";
            break;
        }
    }
}