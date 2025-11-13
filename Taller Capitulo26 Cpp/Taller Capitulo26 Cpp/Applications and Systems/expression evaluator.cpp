#include <iostream>
#include <sstream>

using namespace std;

int main() {
     string line;
    getline(cin,line);
    if(line.empty()) return 0;
    istringstream ss(line);
    long long a;
    char op;
    long long b;
    ss>>a>>op>>b;
    if(op=='+') cout<<a+b<<'\n';
    else if(op=='-') cout<<a-b<<'\n';
    else if(op=='*') cout<<a*b<<'\n';
    else if(op=='/') cout<<(b==0?0:a/b)<<'\n';
    return 0;}
