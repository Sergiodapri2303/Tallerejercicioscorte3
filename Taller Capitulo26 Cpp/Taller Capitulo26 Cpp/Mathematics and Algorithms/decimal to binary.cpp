#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    if(n==0) {
        cout<<"0\n";
        return 0;} unsigned int x = (unsigned int)n;
        string s;
        while(x) {
             s.push_back((x&1)?'1':'0');
            x>>=1;
        } for(int i=(int)s.size()-1;i>=0;i--) cout<<s[i];
        cout<<'\n';
        return 0;}
