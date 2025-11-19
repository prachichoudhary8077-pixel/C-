#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<"sum of the given digits is: "<<a+b;    
}
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    sum(a,b);
}

// different way to write
// void sum(int a, int b){
//     cout<<"sum of the given digits: "<<a+b;
// }
// int main(){
//     sum(3,5);
// }