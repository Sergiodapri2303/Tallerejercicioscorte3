#include <iostream>

using namespace std;

int main() {
    long long n;
    if(!(cin>>n)) return 0;
    int s=0;
    long long x = n<0?-n:n;
    while(x) {
        s+=x%10;
        x/=10;} cout<<s<<'\n';
        return 0;}
