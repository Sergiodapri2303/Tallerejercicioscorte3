#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b;
    if(!(cin>>a)) return 0;
    vector<int> v1(a);
    for(int i=0;i<a;i++) cin>>v1[i];
    if(!(cin>>b)) return 0;
    vector<int> v2(b);
    for(int i=0;i<b;i++) cin>>v2[i];
    for(int x:v1) cout<<x<<" ";
    for(int x:v2) cout<<x<<" ";
    cout<<'\n';
    return 0;}
