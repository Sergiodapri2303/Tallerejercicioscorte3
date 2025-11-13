#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    int num=1;
    for(int i=1;i<=n;i++) {
         for(int j=0;j<i;j++) cout<<num++<<' ';
        cout<<'\n';
    } return 0;}
