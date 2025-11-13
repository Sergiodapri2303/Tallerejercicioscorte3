#include <iostream>

using namespace std;

int main() {
     double weight,height;
    if(!(cin>>weight>>height)) return 0;
    double bmi = weight/(height*height);
    cout<<bmi<<'\n';
    return 0;}
