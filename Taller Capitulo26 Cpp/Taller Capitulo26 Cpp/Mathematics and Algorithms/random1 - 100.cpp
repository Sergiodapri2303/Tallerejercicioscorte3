#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
     srand((unsigned)time(0));
    cout<<(rand()%100)+1<<'\n';
    return 0;}
