#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

//basic data type using scanf and printf, although I'm using cout because it's very complicated to make new line using printf rather than cout

int main() {
   int a;
   long int b;
   char c;
   float d;
   double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
    return 0;
}
