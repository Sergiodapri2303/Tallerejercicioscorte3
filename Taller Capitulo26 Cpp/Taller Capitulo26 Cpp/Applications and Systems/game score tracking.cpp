#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    for(int i=0;i<n;i++) {
         string name;
        int s;
        cin>>name>>s;
        cout<<name<<" "<<s<<'\n';
    } return 0;}
