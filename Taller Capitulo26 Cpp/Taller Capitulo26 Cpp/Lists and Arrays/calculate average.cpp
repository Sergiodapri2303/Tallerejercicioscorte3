#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    long long s=0;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        s+=x;} cout<< (double)s/n <<'\n';
        return 0;}
