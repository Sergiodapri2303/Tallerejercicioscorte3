#include <iostream>
#include <cmath>

using namespace std;

int main() {
     double x;
    int n;
    if(!(cin>>x>>n)) return 0;
    double y = (x-1)/(x+1);
    double s=0.0;
    for(int k=0;k<n;k++) {
         s += (1.0/(2*k+1))*pow(y,2*k+1);
    } cout<<2*s<<'\n';
    return 0;}
