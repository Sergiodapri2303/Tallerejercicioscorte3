#include <iostream>

using namespace std;

int main() {
    int y;
    if(!(cin>>y)) return 0;
    if(y%400==0|| (y%4==0 && y%100!=0)) cout<<"yes\n";
    else cout<<"no\n";
    return 0;}
