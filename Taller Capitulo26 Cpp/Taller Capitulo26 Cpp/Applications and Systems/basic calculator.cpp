#include <iostream>

using namespace std;

int main() {
     long long a,b;
    char op;
    if(!(cin>>a>>op>>b)) return 0;
    if(op=='+') cout<<a+b<<'\n';
    else if(op=='-') cout<<a-b<<'\n';
    else if(op=='*') cout<<a*b<<'\n';
    else if(op=='/') cout<<(b==0?0:a/b)<<'\n';
    return 0;}
