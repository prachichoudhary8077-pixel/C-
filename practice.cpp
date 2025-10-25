#include<iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;  // equal wla mai right to left chalta hai.
    z=x<10;   // greater smaller ki aukat jada hoti hai equal sa 
    cout<<x<<""<<y<<""<<z;
    // false ka mtlb -> zero(0)
    // true ka mtlb -> one(1)
}