#include <iostream>

using namespace std;

int main() {
     int a,b;
    if(!(cin>>a>>b)) return 0;
    int *pa=&a,*pb=&b;
    int t=*pa;
    *pa=*pb;
    *pb=t;
    cout<<a<<" "<<b<<'\n';
    return 0;}
