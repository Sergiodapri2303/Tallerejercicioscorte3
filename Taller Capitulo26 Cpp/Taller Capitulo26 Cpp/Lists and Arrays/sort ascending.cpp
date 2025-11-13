#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int x:v) cout<<x<<" ";
    cout<<'\n';
    return 0;}
