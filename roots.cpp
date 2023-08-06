#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"The values of a,b c are\n";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"The roots are\n"<<r1<<"\n"<<r2;
    return 0;
}