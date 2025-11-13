#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    double d=b*b-4*a*c;
    if(d<0) {
        cout<<"no real\n";
        return 0;} double r1=(-b+sqrt(d))/(2*a);
        double r2=(-b-sqrt(d))/(2*a);
        cout<<r1<<" "<<r2<<'\n';
        return 0;}
