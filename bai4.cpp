#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a , b;
    cin>>a>>b;
    double c= a/b;
    cout<<a+b<<" "<<""<<a-b<<" "<<a*b<<fixed<<setprecision(2)<<" "<<c;

}