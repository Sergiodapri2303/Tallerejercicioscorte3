#include <iostream>
#include <cmath>

using namespace std;

int sum_div(int n) {
     int s=1;
    for(int i=2;i*i<=n;i++) if(n%i==0) {
         s+=i;
        if(i*i!=n) s+=n/i;} return s;
    }
    bool is_triangular(int n) {
         int t=8*n+1;
        int r=(int)sqrt(t);
        return r*r==t;
    }
    int main() {
        int n;
        if(!(cin>>n)) return 0;
        int s=sum_div(n);
        if(s==n) cout<<"perfect\n";
        else if(s>n) cout<<"abundant\n";
        else cout<<"deficient\n";
        cout<<(is_triangular(n)?"triangular\n":"not_triangular\n");
        return 0;}
