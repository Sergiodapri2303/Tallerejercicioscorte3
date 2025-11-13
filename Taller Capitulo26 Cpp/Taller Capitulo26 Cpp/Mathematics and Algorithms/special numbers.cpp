#include <iostream>
#include <cmath>

using namespace std;

bool is_fibonacci(int n) {
     if(n<0) return false;
    int a=0,b=1;
    while(b<n) {
         int t=a+b;a=b;b=t;
    } return b==n||n==0;
}
bool is_kaprekar(int n) {
     long long sq=1LL*n*n;
    string s=to_string(sq);
    for(size_t i=1;i<s.size();i++) {
         long long l=stoll(s.substr(0,i));
        long long r=stoll(s.substr(i));
        if(r>0 && l+r==n) return true;
    } return n==1;
}
bool is_narcissistic(int n) {
     int t=n;
    int s=0;
    int c=0;
    int x=n;
    while(x) {
        c++;
        x/=10;} x=n;
        while(x) {
             s += (int)pow(x%10,c);
            x/=10;} return s==n;
        }
        int main() {
            int n;
            if(!(cin>>n)) return 0;
            cout<<(is_fibonacci(n)?"fibo\n":"not_fibo\n");
            cout<<(is_kaprekar(n)?"kaprekar\n":"not_kaprekar\n");
            cout<<(is_narcissistic(n)?"narcissistic\n":"not_narcissistic\n");
            return 0;}
