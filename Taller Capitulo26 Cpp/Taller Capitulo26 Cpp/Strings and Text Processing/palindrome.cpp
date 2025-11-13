#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    string t;
    for(char c:s) if(isalnum((unsigned char)c)) t.push_back(tolower((unsigned char)c));
    int i=0,j=(int)t.size()-1;
    while(i<j) {
         if(t[i++]!=t[j--]) {
             cout<<"no\n";
            return 0;} } cout<<"yes\n";
            return 0;}
