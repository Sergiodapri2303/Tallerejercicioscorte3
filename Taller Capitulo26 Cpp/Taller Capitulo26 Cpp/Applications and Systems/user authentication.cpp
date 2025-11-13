#include <iostream>
#include <string>

using namespace std;

int main() {
     string user,pass;
    if(!(cin>>user>>pass)) return 0;
    if(user=="admin" && pass=="1234") cout<<"ok\n";
    else cout<<"denied\n";
    return 0;}
