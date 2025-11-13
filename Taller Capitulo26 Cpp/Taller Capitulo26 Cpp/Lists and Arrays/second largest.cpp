#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int m1=INT_MIN,m2=INT_MIN;
    for(int x:v) {
         if(x>m1) {
            m2=m1;
            m1=x;} else if(x>m2 && x<m1) m2=x;} if(m2==INT_MIN) m2=m1;
            cout<<m2<<'\n';
            return 0;}
