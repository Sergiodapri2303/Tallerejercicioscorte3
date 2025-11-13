#include <iostream>

using namespace std;

int gcd(int a,int b) {
     if(b==0) return a<0?-a:a;
    return gcd(b,a%b);
}
int lcm(int a,int b) {
     if(a==0||b==0) return 0;
    return a/gcd(a,b)*b;
}
int main() {
    int a,b;
    if(!(cin>>a>>b)) return 0;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<'\n';
    return 0;}
