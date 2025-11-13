#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    int m=a;
    if(b>m) m=b;
    if(c>m) m=c;
    cout<<m<<'\n';
    return 0;}
