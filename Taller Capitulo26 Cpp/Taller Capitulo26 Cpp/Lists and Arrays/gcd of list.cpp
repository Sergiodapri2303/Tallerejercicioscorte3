#include <iostream>
#include <vector>

using namespace std;

int gcd(int a,int b) {
     if(b==0) return a<0?-a:a;
    return gcd(b,a%b);
}
int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int g=v[0];
    for(int i=1;i<n;i++) g=gcd(g,v[i]);
    cout<<g<<'\n';
    return 0;}
