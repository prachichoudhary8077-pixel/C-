#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f = f * i;
    }
    return f;
}
int main(){
    // FACTORIAL
    int n;
    cout<<"enter n: ";
    cin>>n;
    int r;
    cout<<"enter r: ";
    cin>>r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    cout<<"factorial: "<<a/(b*c);
}
