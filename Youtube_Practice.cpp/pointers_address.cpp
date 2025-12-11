// PRINT ADDRESS
// #include<iostream>
// using namespace std;
// int main(){
//     int x=3;
//     cout<<&x<<endl;
// }

// POINTERS
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 3;
//     int* p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
// }

// PRINT VALUE THROUGH ADDRESS
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 3;
//     int* p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<x<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;
// }

// SWAP TWO NUMBERS BY POINTERS
// #include<iostream>
// using namespace std;
// void swap(int* x , int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int x = 12;
//     int y = 23;
//     cout<<x<<" "<<y<<endl;
//     swap(&x,&y);
//     cout<<x<<" "<<y<<endl;
// }