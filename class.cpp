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



// FOR LOOP
// 2 to 50
// for(int i=2; i<=50; i++){
//     cout<<i<<" ";
//     i++;
// }

// 1 to X
// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     cout<<i<<" ";
// }


// ADD X TO Y(check)
// int x;
// cout<<"enter x: ";
// cin>>x;
// int y;
// cout<<"enter y: ";
// cin>>y;
// for(int i=x; i<=y; i++){
//     cout<<x+y<<" ";
// }

// TABLE 
// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int i=n*1; i<=10*n; i+=n){
//     cout<<i<<" ";
// }

// SUM OF DIGIT(check)
// int n;
// cout<<"enter n: ";
// cin>>n;
// int sum = 0;
// for(int i=1; i<=n; i++){
//     int ld=n%10;
//     sum = sum +ld;
//     n= n/10;
// }
// cout<<sum;

// PRODUCT
// int p=1;
// for(int i=1; i<=5; i++){
//     p= p*i;
    
// }
// cout<<p;

// DIVISIBLE BY 11
// int n;
// cout<<"enter n: ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     if((i%11)==0){
//         cout<<i<<" ";
//     }
// }

// FIBONACCI SERIES
// int a=0, b=1, c, n;
// cout<<"enter n: ";
// cin>>n;
// cout<<a <<" ";
// cout<<b <<" ";
// for(int i=1; i<=(n-2); i++){
//     c=a+b;
//     cout<<c<<" ";
//     a=b;
//     b=c;
// }

// PATTERN PRINTING
// STAR .
// int n;
// cout<<"enter n: ";
// cin>>n;
// int m;
// cout<<"enter m: ";
// cin>>m;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=m; j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


// STAR RECTANGLE
// int n;
// cout<<"enter row: ";
// cin>>n;
// int m;
// cout<<"enter column: ";
// cin>>m;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=m; j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

// NUMBER RECTANGLE
// int n;
// cout<<"enter row: ";
// cin>>n;
// int m;
// cout<<"enter column: ";
// cin>>m;
// for(int i=1; i<=n; i++ ){
//     for(int j=1; j<=m; j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

//  NUMBER RECTANGLE(DIFFERENT ROW)
// int n;
// cout<<"enter row: ";
// cin>>n;
// int m;
// cout<<"enter column: ";
// cin>>m;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=m; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// NUMBER RECTANGLE  (check )
// int n;
// cout<<"enter row: ";
// cin>>n;
// int m;
// cout<<"enter column: ";
// cin>>m;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=m; j--){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


// STAR TRIANGLE
// for(int i=1; i<=5; i++){
//     for(int j=1; j<=i; j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


// NUMBER TRIANGLE
// for(int i=1; i<=5; i++){
//     for(int j=1; j<=i; j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// NUMBER TRIANGLE(column same)
// for(int i=1; i<=5; i++){
//     for(int j=1; j<=i; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// NUMBER TRIANGLE(reverse)
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i;j++){
    //         cout<<5-i+1<<" ";
    //     }
    //     cout<<endl;
    // }

// NUMBER TRIANGLE
// for(int i=1; i<=5; i++){
//     for(int j=1; j<=i; j++){
//         cout<<5-j+1<<" ";
//     }
//     cout<<endl;
// }


// STAR TRIANGLE ULTA
// for(int i=1; i<=5; i++){
//     for(int j=5; j>=i; j--){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

// NUMBER TRIANGLE ULTA
// for(int i=1; i<=5; i++){
//     for(int j=5; j>=i; j--){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// NUMBER TRIANGLE REVERSE
// for(int i=1; i<=5; i++){
//     for(int j=5; j>=i; j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// NUMBER TRIANGLE SAME COLUMN
// for(int i=1; i<=5; i++){
//     for(int j=5; j>=i; j--){
//         cout<<5-i+1<<" ";
//     }
//     cout<<endl;
// }

// NUMBER TRIANGLE SAME ROW
// for(int i=1; i<=5; i++){
//     for(int j=5; j>=i; j--){
//         cout<<5-j+1<<" ";
//     }
//     cout<<endl;
// }


// JUMP IN LOOPS
// PRINT 1 TO 10 EXCEPT 5
// for(int i=1; i<=10; i++){
//     if(i==5){
//         continue;
//     }
//     cout<<i<<" ";
// }

// 1 2 2 1 
// for(int i=1; i<=2; i++){
//     for(int j=1; j<=2; j++){
//         if(i==j){
//             continue;
//         }
//         cout<<i<<" "<<j<<" ";
//     }
// }

// BREAK
// PRIME NUMBER
// int n;
// cout<<"Enter n: ";
// cin>>n;
// int i;
// for(int i=2; i<n; i++){
//     if((n%i)==0){
//         cout<<"not prime";
//         break;
//     }
// }
// if(n==i){
//     cout<<"prime";
// }

// DIFFERENT  (check)
// int n;
// cin>>n;
// int count=0;
// for(int i=2; i<n; i++){
//     if(n%i==0){
//         count++;
//     }
// }
// if(n==i){
//     count++;
// }


//ARRAYS
// INPUT ARRAY AND PRINT ARRAY
// int a[5];
// cin>>a[5];
// for(int i=0; i<5; i++){
//     cin>>a[i];
// }
// for(int i=0; i<5; i++){
//     cout<<a[i];
// }

// ALL EVEN AND ALL ODD
// int a[5],i, es=0;
// int os=0;
// for(i=0; i<5; i++){
//     cin>>a[i];
// }
// for(i=0; i<5; i++){
//     if(a[i]%2==0){
//         es=es+a[i];
//     }
//     else{
//         os=os+a[i];
//     }
// }
// cout<<es;
// cout<<os;

// INDEX
// int a[5],i, es=0;
// int os=0;
// for(i=0; i<5; i++){
//     cin>>a[i];
// }
// for(i=0; i<5; i++){
//     if(i%2==0){
//         es=es+a[i];
//     }
//     else{
//         os=os+a[i];
//     }
// }
// cout<<es;
// cout<<os;

// BIGGEST ONE
// int a[5],i,big;
// for(int i=0; i<5; i++){
//     cin>>a[i];
// }
// big=a[0];
// for(int i=0; i<5; i++){
//     if(a[i]>big){
//         big=a[i];
//     }
// }

// SMALLEST AND ITS LOCATION 
// int a[5],i,small;
// int loc;
// for(i=0; i<5; i++){
//     cin>>a[i];
// }
// small=a[0];
// loc=0;
// for(int i=0; i<5; i++){
//     if(a[i]<small){
//         small=a[i];
//          loc=i;
//     } 
// }
// cout<<"the small no. is: "<<small <<" at location:  "<<loc+1;


// LINEAR SEARCH 
// int n;
// cout<<"enter n: ";
// cin>>n;
// int a[5],i,item;
// for(i=0; i<5; i++){
//     cin>>a[i];
// }
// cin>>item;
// for(i=0; i<5; i++){
//     if(a[i]==item){
//         cout<<"item found at loc: "<<i++;
//         break;
//     }
// }
// if(i==item){
//     cout<<"not found";
// }

// ITEM PRESENT TWO TIMES
// int a[5],i,item,c=0;
// for(i=0; i<5; i++){
//     cin>>a[i];
// }
// cin>>item;
// for(i=0; i<5; i++){
//     if(a[i]==item){
//         cout<<"item found at loc: "<<i++;
//         c++;
//     }
// }
// if(c==0){
//     cout<<"not found";
// }


// 2D ARRAY
// PRINT 2D ARRAY
// int arr[3][3] = {{7,1,2},{6,3,4}};
// for(int i=0; i<3; i++){
//     for(int j=0; j<=2; j++){
//         cin>>arr[i][j]<<" ";
//     }
// }
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cin>>arr[i][j]<<" ";
//     }
//     cout<<"\n";
// }

// ADD OF TWO MATRIX
// int a[2][2];
// int b[2][2];
// int c[2][2];
// for(int i=0; i<2; i++){
//     for(int j=0; j<2; j++){
//         cin>>a[i][j];
//         cin>>b[i][j];
//     }
// }
// for(int i=0; i<2; i++){
//     for(int j=0; j<2; j++){
//         c[i][j] = a[i][j] + b[i][j];
//         cout<< c[i][j]<<" ";
//     }
//     cout<<"\n";
// }

// BIGGEST NUMBER OF THE MATRIX(check)
// int a[3][3];
// int big;
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=3; j++){
//         cin>>a[i][j];
//     }
// }
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         if(a[i][j]>big){
//             cout<<a[i][j]<<" ";
//         }
//     }
//     cout<<"\n";
// }

// MULTIPLICATION OF TWO MATRIX SAME MATRIX
// int a[3][3];
// int b[3][3];
// int c[3][3];
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cin>>a[i][j];
//     }
// }
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         cin>>b[j][i];
//     }
// }
// for(int i=0; i<3; i++){
//     for(int j=0; j<3; j++){
//         c[i][j] = a[i][j] * b[i][j];
//         cout<<c[i][j]<<" ";

//     }
//     cout<<"\n";
// }


// multiplication of different order matrix
// int a[2][3];
// int b[3][4];
// int c[2][4];
// for(int i=0; i<2; i++){
//     for(int j=0; j<4; j++){
//         cin>>a[i][j];
//         cin>>b[i][j];
//     }
//     cout<<"\n";
// }
// for(int i=0; i<2; i++){
//     for(int j=0; j<4; j++){
//         c[i][j]=0;
//         for(int k=0; k<3; k++){
//             c[i][j] =  c[i][j] + a[i][k] * b[k][j];
//         }
//         cout<<c[i][j]<<" ";
//     }
//     cout<<"\n";
// }









}