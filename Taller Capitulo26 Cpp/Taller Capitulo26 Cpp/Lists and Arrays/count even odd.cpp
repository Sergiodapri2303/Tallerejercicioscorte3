#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    int ev=0,od=0;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(x%2==0) ev++;
        else od++;
    } cout<<ev<<" "<<od<<'\n';
    return 0;}
