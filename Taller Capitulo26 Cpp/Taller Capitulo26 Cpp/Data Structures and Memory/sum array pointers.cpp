#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    int s=0;
    for(int i=0;i<n;i++) {
         int x;
        cin>>x;
        s+=x;} cout<<s<<'\n';
        return 0;}
