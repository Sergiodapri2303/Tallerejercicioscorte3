#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    if(n<=1) {
        cout<<"no\n";
        return 0;} if(n<=3) {
            cout<<"yes\n";
            return 0;} if(n%2==0||n%3==0) {
                cout<<"no\n";
                return 0;} for(int i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) {
                    cout<<"no\n";
                    return 0;} cout<<"yes\n";
                    return 0;}
