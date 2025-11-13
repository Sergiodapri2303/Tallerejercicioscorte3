#include <iostream>

using namespace std;

int main() {
    long long n;
    if(!(cin>>n)) return 0;
    if(n==0) {
        cout<<1<<'\n';
        return 0;} int c=0;
        long long x = n<0?-n:n;
        while(x) {
            c++;
            x/=10;} cout<<c<<'\n';
            return 0;}
