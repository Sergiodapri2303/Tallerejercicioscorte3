#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int> row;
    for(int i=0;i<n;i++) {
         row.assign(i+1,1);
        for(int j=1;j<i;j++) row[j]=row[j]+row[j-1];
        for(int x:row) cout<<x<<" ";
        cout<<'\n';
    } return 0;}
