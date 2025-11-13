#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    for(int a=1;a<=n;a++) for(int b=a;b<=n;b++) {
         int c2=a*a+b*b;
        int c=(int)sqrt(c2);
        if(c*c==c2 && c<=n) cout<<a<<" "<<b<<" "<<c<<'\n';
    } return 0;}
