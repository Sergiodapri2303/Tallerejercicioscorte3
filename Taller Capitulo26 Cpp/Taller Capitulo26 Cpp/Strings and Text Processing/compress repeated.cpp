#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if(!getline(cin,s)) return 0;
    if(s.empty()) {
        cout<<'\n';
        return 0;} char cur=s[0];
        int cnt=1;
        for(size_t i=1;i<s.size();i++) {
             if(s[i]==cur) cnt++;
            else{ cout<<cur<<cnt;
            cur=s[i];
            cnt=1;
        } } cout<<cur<<cnt<<'\n';
        return 0;}
