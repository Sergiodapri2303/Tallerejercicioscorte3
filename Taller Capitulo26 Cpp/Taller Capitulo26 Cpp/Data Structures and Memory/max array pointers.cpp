#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    int m=INT_MIN;
    for(int i=0;i<n;i++) {
         int x;
        cin>>x;
        if(x>m) m=x;} cout<<m<<'\n';
        return 0;}
