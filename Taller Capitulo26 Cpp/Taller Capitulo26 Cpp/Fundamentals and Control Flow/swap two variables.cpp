#include <iostream>

using namespace std;

int main() {
    int a,b;
    if(!(cin>>a>>b)) return 0;
    int t=a;a=b;b=t;
    cout<<a<<' '<<b<<'\n';
    return 0;}
