#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
     srand((unsigned)time(0));
    cout<<(rand()%6)+1<<'\n';
    return 0;}
