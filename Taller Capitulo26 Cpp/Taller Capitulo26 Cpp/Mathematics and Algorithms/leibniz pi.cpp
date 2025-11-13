#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    double s=0.0;
    for(int i=0;i<n;i++) s += (i%2==0?1.0:-1.0)/(2*i+1);
    cout<<4.0*s<<'\n';
    return 0;}
