#include<iostream>
using namespace std;
int main(){
    // CALCULATOR(by if)
    // int n1;
    // cout<<"enter value n1: ";
    // cin>>n1;
    // char op;
    // cout<<"enter operator: ";
    // cin>>op;
    // int n2;
    // cout<<"enter value n2: ";
    // cin>>n2;
    // if(op=='+') cout<<n1+n2;
    // if(op=='-') cout<<n1-n2;
    // if(op=='*') cout<<n1*n2;
    // if(op=='/') cout<<n1/n2;

    // CALCULATOR (switch statment)
    int n1;
    cout<<"enter value n1: ";
    cin>>n1;
    char op;
    cout<<"enter value op: ";
    cin>>op;
    int n2;
    cout<<"enter value n2: ";
    cin>>n2;
    switch(op){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Invalid Operator";
    }

}