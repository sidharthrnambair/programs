#include<iostream>
using namespace std;
int main()
{

    int A[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the value\n";
        cin>>A[i];
    }
    cout<<"THe array is\n";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}