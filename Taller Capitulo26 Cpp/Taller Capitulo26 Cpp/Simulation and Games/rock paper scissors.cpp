#include <iostream>

using namespace std;

int main() {
    int a,b;
    if(!(cin>>a>>b)) return 0;
    if(a==b) cout<<"draw\n";
    else if((a==0 && b==2)||(a==1 && b==0)||(a==2 && b==1)) cout<<"player1\n";
    else cout<<"player2\n";
    return 0;}
