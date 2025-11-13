#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    if(n==0) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int last=v.back();
    for(int i=n-1;i>0;i--) v[i]=v[i-1];
    v[0]=last;
    for(int x:v) cout<<x<<" ";
    cout<<'\n';
    return 0;}
