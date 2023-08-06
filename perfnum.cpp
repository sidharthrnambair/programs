#include<iostream>
using namespace std;
int main()
{   int n,i;
    int sum=0;

    cout<<"Enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(2*n==sum)
    {
        cout<<"the number is a PERFECT NUMBER\n";
    }
    else
        cout<<"NOT PERFECT NUMBER\n";
        return 0;
        
      
}