// SWAP NUMBER BY THIRD VARIABLE
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"value after swap 'a': "<<a;
//     cout<<endl;
//     cout<<"value after swap 'b': "<<b;
// }

// SWAP NUMBER WITHOUT USING THIRD VARIABLE
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<"value of 'a' after swap: "<<a;
//     cout<<endl;
//     cout<<"value of 'b' after swap: "<<b;
// }

// SWAP FUNCTION
#include<iostream>
using namespace std;
int swap(int x,int y){
    // int temp;
    // temp = x;
    // x = y;
    // y = temp;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"value of 'x' after swap: "<<x;
    cout<<endl;
    cout<<"value of 'y' after swap: "<<y;
    return (0);
}
int main(){
    int a=2,b=3;
    swap(a,b);
}
