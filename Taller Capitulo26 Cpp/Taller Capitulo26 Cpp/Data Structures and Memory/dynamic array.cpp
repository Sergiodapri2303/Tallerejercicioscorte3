#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    int* a = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<'\n';
    free(a);
    return 0;}
