#include <iostream>

using namespace std;

int main() {
    int n,m;
    if(!(cin>>n>>m)) return 0;
    for(int i=0;i<n;i++) {
         for(int j=0;j<m;j++) cout<< ((i+j)%2==0?'*':'+');
        cout<<'\n';
    } return 0;}
