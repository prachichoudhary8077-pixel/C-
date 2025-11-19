#include<iostream>
using namespace std;
void usa(){
    cout<<"you are in usa"<<endl;
    return ;
}
void india(){
    cout<<"i am indian"<<endl;
    usa();
}
int main(){
    cout<<"you are in main body"<<endl;
    india();
}