#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    long long r=1;
    for(int i=2;i<=n;i++) r*=i;
    cout<<r<<'\n';
    return 0;}
