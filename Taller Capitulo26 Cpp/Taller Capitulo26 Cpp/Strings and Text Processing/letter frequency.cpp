#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    map<char,int> m;
    for(char c:s) if(isalpha((unsigned char)c)) m[tolower((unsigned char)c)]++;
    for(auto &p:m) cout<<p.first<<' '<<p.second<<'\n';
    return 0;}
