#include <iostream>
using namespace std;

int main() {
   int a , b;
   cin>>a>>b;
   int c = a/b;
   int d=c*b;
   if(d<a)
   {
    d=d+b;
   }
   cout<<d;
}
