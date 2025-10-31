#include<iostream>
using namespace std;
int main(){
    // PRINT 1 TO 10
        // int i=1;
        // while(i<=10)
        // {
        //     cout<<i<<endl;
        //     i++;
        // }

    // PRINT 1 TO 100
    // int i=1;
    //     while(i<=100)
    //     {
    //         cout<<i<<endl;
    //         i++;
    //     }

    // 2 TO 50
    // int i=2;
    //     while(i<=50)
    //     {
    //         cout<<i<<endl;
    //         i++;
    //     }

    // 1 TO X
    // int i=1;
    // int x;
    // cout<<"enter value of x: ";
    // cin>>x;
    //     while(i<=x)
    //     {
    //         cout<<i<<endl;
    //         i++;
    //     }

    // X TO Y
    // int x,y;
    // cout<<"enter value of x: ";
    // cin>>x;
    // cout<<"enter value of y: ";
    // cin>>y;
    // int i=x;
    // while(i<=y){
    //     cout<<i<<endl;
    //     i++;
    // }

    // ADDITION 1 to 10
    // int i=1;
    // int s=0;
    // while(i<=10){
    //     s+=i;
    //     i++;
    // }
    // cout<<s;

    // ADDITION 1 TO 15
    // int i=1;
    // int s=0;
    // while(i<=15){
    //     s+=i;
    //     i++;
    // }
    // cout<<s;

    // ADDITION 10 TO 1
    // int i=10;
    // int s=0;
    // while(i>=1){
    //     s+=i;
    //     i--;
    // }
    // cout<<s;

    // ADDITION FROM X TO Y
    // int x,y;
    // cout<<"enter value of x: ";
    // cin>>x;
    // cout<<"enter value of y: ";
    // cin>>y;
    // int i=x;
    // int s=0;
    // while(i<=y){
    //     s+=i;
    //     i++;
    // }
    // cout<<s;

    // MULTIPLICATION OF FIRST FIVE INTEGER
    // int n;
    // cin>>n;
    // int m=1;
    // int i=n;
    // while(i<=n){
    //     m*=i
    //     i++;
    //     cout<<m;
    //     // error
    // }


    // FACTORIAL
    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;
    // int m=1;
    // int i=1;
    // while(i<=n){
    //     m=m*i;
    //     i++;
    // }
    // cout<<m;

    // TABLE
    // int n;
    // cout<<"enter value of n: ";
    // cin>>n;
    // int i=1;
    // int m;
    // while(i<=10){
        
    //     cout<<m<<"="<<n<<"*"<<i<<endl;
    //     i++;
        
    // }

    // int n;
    // cout<<"enter value: ";
    // cin>>n;
    // int sum=0;
    
    // int digit;
    // while(n>0){
    //     digit=n%10;
    //     sum = sum+digit;
    //     n=n/10;
    // }
    // cout<<"sum of digits of"<<n <<"is: "<<sum;


    


    // int n;
    // cout << "Enter a 4-digit number: ";
    // cin >> n;

    // int sum = 0, digit, temp = n;

    // while (temp > 0) {
    //     digit = temp % 10;
    //     sum += digit;
    //     temp /= 10;
    // }

    // cout << "Sum of digits of " << n << " is: " << sum;
    

    
    // int a, b, c;
    
    // cin >> a >> b >> c;

    // // Using nested ternary operator to find largest number
    // int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // cout << largest;
    

   
    // int year;
    // cin >> year;

    // // Leap year condition using ternary operator
    // ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
    //     ? cout << "Leap year"
    //     : cout << "Not a Leap Year";


  
    // int n, rev = 0, temp, digit;
    // cin >> n;

    // temp = n;
    // while (temp > 0) {
    //     digit = temp % 10;
    //     rev = rev * 10 + digit;
    //     temp /= 10;
    // }

    // // Using ternary operator to check palindrome
    // (n == rev) ? cout << "Yes" : cout << "No";


    // int n,rev,result;
    // cout<<"enter 4 digit: ";
    // cin>>n;
    // rev=(n%10)*1000 + ((n/10)%10) * 100 + ((n/100)%10)*10+(n/1000);
    // string result = (n==rev)?"palindrome": "Not a plain";
    // cout<< n <<"is"<< result << endl;



    // SUM  OF DIGITS
    // int n,m;
    // int sum=0;
    // cin>>n;
    // while(n>0){
    //     m=n%10;
    //     sum = sum + m;
    //     n=n/10;
    // }
    // cout<<sum;

    // REVERSE NUMBER AND PALINDROME
    // int n,m;
    // int sum=0;
    // cin>>n;
    // while(n>0){
    //     m = n % 10;
    //     sum = 10*sum+m;
    //     n = n/10;
    // }
    // cout<<sum <<endl;
    // if(n==sum){
    //     cout<<"palindrome";
    // }
    // else{
    //     cout<<"not palindrome";
    // }


    // ARMSTRONG 
    // int n,d;
    // int sum =0;
    // cout<<"enter value n: ";
    // cin>>n;
    // int i=n;
    // while(i>0){
    //     d = i%10;
    //     sum = sum + (d*d*d);
    //     i = i/10;
    // }
    // if(sum==n){
    //     cout<<"armstrong";
    // }
    // else{
    //     cout<<"not armstrong";
    // }



// swaping
// int a=9;
// int b=8;
// int temp;
// temp=a;
// a=b;
// b=temp;
// cout<<;



// armstrong 
// int n,d,s=0;
// cin>>n;
// int t=n;
// while(n>0){
//     d=n%10;
//     s = s+(d*d*d);
//     n=n/10;
// }
// if(s==t){
//     cout<<"armstrong";
// }
// else{
//     cout<<"not";
// }




// PRINT 1 TO 100
// int i=1;
// do{
//     cout<<i <<" ";
//     i++;
// }
// while(i<=100);


// PRINT 2 TO Y
// int y;
// cout<<"enter value y: ";
// cin>>y;
// int i=1;
// do{
//     cout<<i <<" ";
//     i++;
// } while(i<=y);


// PRINT X TO Y
// int x,y;
// cout<<"enter value x: ";
// cin>>x;
// cout<<"enter value y: ";
// cin>>y;
// int i=x;
// do{
//     cout<<i <<" ";
//     i++;
// } while(i<=y);


// PRINT EVEN 2 TO Y
// int y;
// cout<<"enter y: ";
// cin>>y;
// int i=2;
// do {
//     cout<<i <<" ";
//     i+=2;
// } while(i<=y);


// PRINT 10 TO 1
// int i=10;
// do{
//     cout<<i <<" ";
//     i--;
// } while(i>=1);

// FIND MULTIPLICATION OF FIRST FIVE NO. {check again}
// int n;
// cout<<"enter value n: ";
// cin>>n;
// int i=1;
// int m=1;
// do{
//     m = m*n;
//     i++;
//     cout<<m <<" ";
//  } while(i<=n);



// PALINDROME
// int n;
// cin>>n;
// int i=n;
// int rev=0;
// int org=n;
// int d;
// do
// {
// 	d=i%10;
// 	rev=(rev*10)+d;
// 	i=i/10;
// }while(i>0);
// if(org==rev){
//     cout<<" pallindrome";
// }
// else{
//     cout<<"not pallindrome";
// }


// ADD EVEN ODD vomplete 
// int i=1, es=0, od=0;
// do{
//     if((i%2)==0){
//         es=es+i;
//     }
//     else{
//         od=od+i;
//     }
// }while()


}