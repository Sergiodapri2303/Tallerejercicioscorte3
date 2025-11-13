#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    int k;
    if(!getline(cin,s)) return 0;
    if(!(cin>>k)) return 0;
    for(char &c:s) {
         if(isalpha((unsigned char)c)) {
             char base = isupper((unsigned char)c)?'A':'a';
            c = (char)(base + (c-base + k%26 +26)%26);
        } } cout<<s<<'\n';
        return 0;}
