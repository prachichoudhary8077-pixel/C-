#include<iostream>
using namespace std;
// void sum(int n, int m){
//     cout<<"sum of the given number: "<< n+m;
//     return;
// }
// int main(){
//     int n,m;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter m: ";
//     cin>>m;
//     sum(n,m);
// }

// different way
int sum(int a, int b){
    return a+b;
}
int main(){
    cout<<"sum of the given number: "<<sum(4,5);
}