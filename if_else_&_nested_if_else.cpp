#include <iostream>
using namespace std;
int main(){
    // CHAPTER -> 2
    // IF-ELSE
    // ODD EVEN
    // int x;
    // cout<<"enter value of x: ";
    // cin>>x;
    // if((x%2)==0){
    //     cout<<"this is even number.";
    // }
    // else{
    //     cout<<"this is odd number.";
    // }

    // CHECK DIVISIBLE BY 5
    // int f;
    // cout<<"enter value: ";
    // cin>>f;
    // if((f%5)==0){
    //     cout<<"given output is divisible by 5.";
    // }
    // else{
    //     cout<<"given output is not divisible by 5.";
    // }

    // ABSOLUTE VALUE (means -> negative value ko poisitive krna)
    // int x;
    // cout<<"enter value: ";
    // cin>>x;
    // cout<<"the absolute value is: ";
    // if(x>=0){
    //     cout<<x;
    // }
    // else{
    //     cout<<-x;
    // }

    // CP AND SP 
    // int cp;
    // cout<<"enter value cp: ";
    // cin>>cp;
    // int sp;
    // cout<<"enter value of sp: ";
    // cin>>sp;
    // if(cp>sp){
    //     cout<<"Loss is "<<cp-sp;
    // }
    // else if(cp<sp){
    //     cout<<"profit is "<<sp-cp;
    // }
    // else{
    //     cout<<"no profit no loss";
    // }

    // AREA AND PERIMETER 
    // int l;
    // cout<<"enter length: ";
    // cin>>l;
    // int b;
    // cout<<"enter breadth: ";
    // cin>>b;
    // float areaoR = l*b;
    // float perimeteroR = 2*(l+b);
    // cout<< "areaoR is "<<areaoR <<endl;
    // cout<< "perimeteroR is " <<perimeteroR <<endl;
    // if(areaoR>perimeteroR){
    //     cout<<"Area of Reactangle is greater than Perimeter";
    // }
    // else{
    //     cout<<"Perimeter of Reactangle is greater than Area";
    // }


    // MULTIPLE CONDITIONS USING && AND || 
    // THREE DIGIT NUMBER 
    // int n;
    // cout<<"enter value: ";
    // cin>>n;
    // if(n>99 && n<1000){
    //     cout<<"this is a three digit number -> "<<n <<endl;
    // }
    // else{
    //     cout<<"this is not a three digit number -> "<<n;
    // }

    // DIVISIBLE BY 5 AND 3
    // int n;
    // cout<<"enter value: ";
    // cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<"this is divisible by 5 and 3 both"<<endl;
    // }
    // else{
    //     cout<<"this is not divisible by 5 and 3";
    // }

    
    // DIVISIBLE BY 5 AND 3
    // int n;
    // cout<<"enter value: ";
    // cin>>n;
    // if(n%5==0 || n%3==0){
    //     cout<<"this is divisible by 5 or 3 "<<endl;
    // }
    // else{
    //     cout<<"this is not divisible by 5 or 3";
    // }

    // SIDE OF TRIANGLE 
    // int a,b,c;
    // cout<<"enter value of a: ";
    // cin>>a;
    // cout<<"enter value of b: ";
    // cin>>b;
    // cout<<"enter value of c: ";
    // cin>>c;
    // if((a+b)>c && (b+c)>a && (a+c)>b){
    //     cout<<"Valid triangle";
    // }
    // else{
    //     cout<<"Invalid triangle";
    // }

    // GREATEST 
    // int a,b,c;
    // cout<<"enter value a: ";
    // cin>>a;
    // cout<<"enter value b: ";
    // cin>>b;
    // cout<<"enter value c: ";
    // cin>>c;
    // if(a>b && a>c){
    //     cout<<"a is greatest: "<<a <<endl;
    // }
    // else if(b>a && b>c){
    //     cout<<"b is greatest: "<<b <<endl;
    // }
    // else{
    //     cout<<"c is greatest: "<<c;
    // }


    // NESTED IF-ELSE 
    // GREATEST NUMBER(without using multiple condition)
    int a,b,c;
    cout<<"enter value a: ";
    cin>>a;
    cout<<"enter value b: ";
    cin>>b;
    cout<<"enter value c: ";
    cin>>c;
    if(a>b){ // b is never be greater 
        if(a>c){
            cout<<"a is greatest: "<<a;
        }
        else{ // c>a , a>b -> c>a>b
            cout<<"c is greatest: "<<c;
        }
    }
    else{ // b>a
        if(b>c){
            cout<<"b is greatest: "<<b;
        }
        else{ // c>b , c>b>a
            cout<<"c is greatest: "<<c;
        }
    }
}