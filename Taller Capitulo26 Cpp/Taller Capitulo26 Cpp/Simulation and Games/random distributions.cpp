#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
     srand((unsigned)time(0));
    int n;
    if(!(cin>>n)) return 0;
    double sum=0;
    for(int i=0;i<n;i++) sum += (double)rand()/RAND_MAX;
    cout<<sum/n<<'\n';
    return 0;}
