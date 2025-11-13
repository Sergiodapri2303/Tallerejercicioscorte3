#include <iostream>

using namespace std;

int main() {
     long long n;
    if(!(cin>>n)) return 0;
    long long s1=0,s2=0;
    for(long long i=1;i<=n;i++) {
         s1+=i*i;
    } for(long long i=1;i<=n;i+=2) s2+=i*i;
    cout<<s1<<" "<<s2<<'\n';
    return 0;}
