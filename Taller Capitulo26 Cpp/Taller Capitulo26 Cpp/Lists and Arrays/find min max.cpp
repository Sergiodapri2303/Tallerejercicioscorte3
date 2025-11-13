#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mn=v[0], mx=v[0];
    for(int x:v) {
         if(x<mn) mn=x;
        if(x>mx) mx=x;
    } cout<<mn<<" "<<mx<<'\n';
    return 0;}
