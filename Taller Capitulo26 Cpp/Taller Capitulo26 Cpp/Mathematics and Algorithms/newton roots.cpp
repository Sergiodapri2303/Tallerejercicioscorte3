#include <iostream>
#include <cmath>

using namespace std;

double sqrt_newton(double a) {
     double x=a;
    for(int i=0;i<20;i++) x=0.5*(x+a/x);
    return x;
}
double cbrt_newton(double a) {
     double x=a;
    for(int i=0;i<20;i++) x = (2.0*x + a/(x*x))/3.0;
    return x;
}
int main() {
     double a;
    if(!(cin>>a)) return 0;
    cout<<sqrt_newton(a)<<" "<<cbrt_newton(a)<<'\n';
    return 0;}
