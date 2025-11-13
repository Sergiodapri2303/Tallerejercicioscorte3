#include <iostream>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    if(n>0) cout<<"positive\n";
    else if(n<0) cout<<"negative\n";
    else cout<<"zero\n";
    return 0;}
