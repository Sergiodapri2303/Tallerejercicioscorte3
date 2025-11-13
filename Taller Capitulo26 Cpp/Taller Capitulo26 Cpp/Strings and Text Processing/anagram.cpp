#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    string x,y;
    for(char c:a) if(isalnum((unsigned char)c)) x.push_back(tolower((unsigned char)c));
    for(char c:b) if(isalnum((unsigned char)c)) y.push_back(tolower((unsigned char)c));
    if(x.size()!=y.size()) {
        cout<<"no\n";
        return 0;} sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        cout<<(x==y?"yes\n":"no\n");
        return 0;}
