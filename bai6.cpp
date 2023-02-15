#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    double e = sqrt(pow(a-c,2)+pow(b-d,2));
    cout<<fixed<<setprecision(2)<<e;
}