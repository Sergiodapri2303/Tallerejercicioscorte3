#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    string t;
    for(char c:s) if(isalnum((unsigned char)c)||isspace((unsigned char)c)) t.push_back(tolower((unsigned char)c));
    string cleaned;
    for(char c:t) if(!isspace((unsigned char)c)) cleaned.push_back(c);
    int i=0,j=(int)cleaned.size()-1;
    while(i<j) {
         if(cleaned[i++]!=cleaned[j--]) {
             cout<<"no\n";
            return 0;} } cout<<"yes\n";
            return 0;}
