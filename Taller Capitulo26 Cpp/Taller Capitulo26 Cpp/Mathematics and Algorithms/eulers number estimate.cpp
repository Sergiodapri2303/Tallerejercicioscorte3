#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    double s=1.0;
    double f=1.0;
    for(int i=1;i<=n;i++) {
         f*=i;
        s+=1.0/f;
    } cout<<s<<'\n';
    return 0;}
