#include<iostream>
using namespace  std;
int main()
{   char ch;
    int a,b,c;


    cout<<"Menu\n";
    cout<<"1.Add\n"<<"2.Sub\n"<<"3.Mul\n"<<"4.Div\n";
    cout<<"Enter your choice\n";
    cin>>ch;
    cout<<"Enter values for a \n";
    cin>>a;
    cout<<"Enter values for b\n";
    cin>>b;
    switch(ch)
    {
        case '+': c=a+b;
            cout<<"Result is\t"<<c;
            break;

        case '-': c=a-b;
            cout<<"c";
            break;
        case '*': c=a*b;
            cout<<c;
            break;
        case '/': c=a/b;
        cout<<c;
        break;
        default: cout<<"invalid\n";        
    }
    return 0;
}