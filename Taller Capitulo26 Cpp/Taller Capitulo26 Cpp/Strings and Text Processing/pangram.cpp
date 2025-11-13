#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    bool seen[26]={0};
    int cnt=0;
    for(char c:s) if(isalpha((unsigned char)c)) {
         int idx=tolower((unsigned char)c)-'a';
        if(!seen[idx]) {
            seen[idx]=true;
            cnt++;} } cout<<(cnt==26?"yes\n":"no\n");
            return 0;}
