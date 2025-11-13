#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    if(n<2) {
        cout<<'\n';
        return 0;} vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i+1<n;i++) cout<<v[i]+v[i+1]<<" ";
        cout<<'\n';
        return 0;}
