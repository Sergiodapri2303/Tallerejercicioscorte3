#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    double s=(a+b+c)/2.0;
    cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<'\n';
    return 0;}
