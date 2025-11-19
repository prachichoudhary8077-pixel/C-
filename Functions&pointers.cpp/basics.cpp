#include<iostream>
using namespace std;
// BASICS 1
// void greet(){
//         cout<<"good morning"<<endl;
//         cout<<"how are you?";
//     }
// int main(){
//     greet();
//     cout<<endl;
//     greet();    
// }

// BASICS 2
void usa(){
    cout<<"you are in usa.";
    return;
}
void india(){
    cout<<"i am indian.";
    return;
}
int main(){
    cout<<"you are in main body."<<endl;
    india();
    cout<<endl;
    usa();
}