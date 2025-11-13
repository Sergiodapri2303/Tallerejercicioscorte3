#include <iostream>

using namespace std;

int main() {
     int n;
    if(!(cin>>n)) return 0;
    long long a=0,b=1;
    for(int i=0;i<n;i++) {
         cout<<a<<" ";
        long long t=a+b;
        a=b;
        b=t;
    } cout<<'\n';
    return 0;}
