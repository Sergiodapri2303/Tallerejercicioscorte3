#include <iostream>
#include <cmath>

using namespace std;

long long factorial(int n) {
     long long r=1;
    for(int i=2;i<=n;i++) r*=i;
    return r;
}
long long binomial(int n,int k) {
     if(k<0||k>n) return 0;
    long long r=1;
    for(int i=1;i<=k;i++) {
         r = r*(n-k+i)/i;
    } return r;
}
double stirling(int n) {
     if(n<=0) return 1.0;
    return sqrt(2*M_PI*n)*pow(n/exp(1.0),n);
}
int main() {
    int n,k;
    if(!(cin>>n>>k)) return 0;
    cout<<binomial(n,k)<<" "<<stirling(n)<<'\n';
    return 0;}
