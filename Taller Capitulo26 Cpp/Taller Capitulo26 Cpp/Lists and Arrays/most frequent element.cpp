#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int> cnt;
    for(int x:v) cnt[x]++;
    int best=v[0],bf=0;
    for(auto &p:cnt) if(p.second>bf) {
        bf=p.second;
        best=p.first;} cout<<best<<'\n';
        return 0;}
