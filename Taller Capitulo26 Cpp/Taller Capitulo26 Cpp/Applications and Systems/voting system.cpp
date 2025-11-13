#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    map<string,int> cnt;
    for(int i=0;i<n;i++) {
         string v;
        cin>>v;
        cnt[v]++;
    } for(auto &p:cnt) cout<<p.first<<" "<<p.second<<'\n';
    return 0;}
