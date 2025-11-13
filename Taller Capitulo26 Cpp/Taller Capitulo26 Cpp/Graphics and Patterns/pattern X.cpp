#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    for(int i=0;i<n;i++) {
         for(int j=0;j<n;j++) cout<< (j==i||j==n-1-i?'*':' ');
        cout<<'\n';
    } return 0;}
