#include<iostream>
using namespace std;
int main(){
    // 'N' TIMES
    // int n;
    // cout<<"enter value: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<"HELLO WORLD" <<endl;
    // }

    // 1 TO 100
    // for(int i=1; i<=100; i++){
    //     cout<<i <<" ";
    // }

    // EVEN 1 TO 100
    // for(int i=2; i<=100; i+=2){
    //     cout<<i<<endl;
    // }

    // EVEN 1 TO 100
    // for(int i=1; i<=100; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    // ODD 1 TO 100
    // for(int i=1; i<=100; i++){
    //     if(i%2!=0){
    //         cout<<i<<endl;
    //     }
    // }

    // ODD 1 TO 100
    // for(int i=1; i<=100; i+=2){
    //     cout<<i<<endl;
    // }

    // TABLE OF 19
    // for(int i=19; i<=190; i=i+19){
    //     cout<<i<<endl;
    // }

    // TABLE OF 19
    // for(int i=19; i<=190; i++){
    //     if(i%19==0){
    //         cout<<i<<endl;
    //     }
    // }

    // TABLE OF "N"
    int n;
    cout<<"enter value: ";
    cin>>n;
    for(int i=n; i<=10*n; i+=n){
            cout<<i<<endl;
    }
}