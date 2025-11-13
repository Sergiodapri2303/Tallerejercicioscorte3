#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    int s=0;
    int sign= n<0?-1:1;
    unsigned int x = (unsigned int)(n*sign);
    while(x) {
        s=s*10+x%10;
        x/=10;} cout<<s*sign<<'\n';
        return 0;}
