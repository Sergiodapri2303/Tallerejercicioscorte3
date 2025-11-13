#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    for(int i=0;i<n;i++) {
         string id;
        double g;
        cin>>id>>g;
        cout<<id<<" "<<g<<'\n';
    } return 0;}
