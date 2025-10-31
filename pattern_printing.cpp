#include<iostream>
using namespace std;
int main(){
    // STAR RECTANGLE
    // int m;
    // cout<<"enter rows: ";
    // cin>>m;
    // int n;
    // cout<<"enter column: ";
    // cin>>n;
    // for(int i=1; i<=m; i++){   // i->row
    //     for(int j=1; j<=n; j++){   // j->column
    //      cout<<"*";   
    //     }
    //     cout<<endl;
    // }


    // SOLID SQUARE
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // NUMBER SQUARE 1 2 3 4
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // NUMBER SQUARE 1 1 1 1
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    // ALPHABET SQUARE
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }


    // ALPHABET SQUARE 
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<(char)(i+64) <<" ";
    //     }
    //     cout<<endl;
    // }


    // SMALL ALPHABET 
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<(char)(i+96)<<" ";
    //     }
    //     cout<<endl;
    // }
    

    // STAR TRIANGLE
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

}