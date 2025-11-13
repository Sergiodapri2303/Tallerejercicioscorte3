#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
     srand((unsigned)time(0));
    int secret=(rand()%100)+1;
    int guess;
    while(cin>>guess) {
         if(guess==secret) {
             cout<<"correct\n";
            break;} else if(guess<secret) cout<<"higher\n";
            else cout<<"lower\n";
        } return 0;}
