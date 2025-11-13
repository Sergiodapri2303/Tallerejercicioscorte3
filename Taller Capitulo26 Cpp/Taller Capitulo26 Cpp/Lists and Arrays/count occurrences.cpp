#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,x;
    if(!(cin>>n)) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(!(cin>>x)) return 0;
    int c=0;
    for(int y:v) if(y==x) c++;
    cout<<c<<'\n';
    return 0;}
