#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    const char* p=s.c_str();
    int c=0;
    while(*p) {
         c++;
        p++;
    } cout<<c<<'\n';
    return 0;}
