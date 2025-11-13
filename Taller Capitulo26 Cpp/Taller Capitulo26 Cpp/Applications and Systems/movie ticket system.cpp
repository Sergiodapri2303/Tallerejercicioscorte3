#include <iostream>
#include <string>

using namespace std;

int main() {
     int n;
    if(!(cin>>n)) return 0;
    for(int i=0;i<n;i++) {
         string name;
        int t;
        cin>>name>>t;
        cout<<name<<" "<<t<<'\n';
    } return 0;}
