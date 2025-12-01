// PRINT NUMBER 1 TO 5(WHILE LOOP)
// #include<iostream>
// using namespace std; 
// int main(){
//     int i=1;
//     while(i<=5){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }

// PRINT 1 TO 5 (BY DO WHILE)
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<endl;
//         i++;
//     }while(i<=5);
//     return 0;
// }

// PRINT FIRST 5 NATURAL NUMBER
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter value of n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }


// BREAK AND CONTINUE STATEMENT
// NUMBER PRINT KRNA HAI 1 TO 5 BUT 3 NHI KRNA OR 5 TK KRNA HAI
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         if(i==3){
//             continue;   // skip 3
//         }
//         if(i==5){
//             break;   // stop at 5
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// NESTED ITERATION
// PRINT 3 BY 3 STAR PATTERN (STAR SQUARE)
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=3; i++){
//         for(int j=1; j<=3; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// EK LINE MAI INPUT LENA 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter value: ";
//     cin>>a>>b>>c;
//     cout<<"the output is: "<<a<<" "<<b<<" "<<c;
// }

// ARRAYS
// SINGLE DIMENSION
// PRINT INDEX VALUE
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={10,20,30,40,50};
//     cout<<"element at index 0: "<<a[0]<<endl;
//     cout<<"element at index 1: "<<a[1]<<endl;
//     cout<<"element at index 2: "<<a[2]<<endl;
//     cout<<"element at index 3: "<<a[3]<<endl;
//     cout<<"element at index 4: "<<a[4]<<endl;
// }

// MULTIPLE DIMENTION 
// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[2][3] = {{1,2,3},{4,5,6}};
//     cout<<"element at matrix[0][0]: "<<matrix[0][0]<<endl;
//     cout<<"element at matrix[1][2]: "<<matrix[1][2]<<endl;
//     cout<<"matrix elements: "<<endl;
//     for(int i=0; i<2; i++)
//     // rows
//     for(int i=0; i<2; ++i){
//         for(int j=0; j<3; j++){
//             cout<< matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// FIND OUT EVEN OR ODD
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter value n: ";
//     cin>>n;
//     if((n%2)==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
// }

// BIGGEST OF TWO
// #include<iostream>
// using namespace std;
// int main(){
//     int n,y;
//     cout<<"enter value n: ";
//     cin>>n;
//     cout<<"enter value y: ";
//     cin>>y;
//     if(n>y){
//         cout<<"n is biggest of y: "<<n;
//     }
//     else{
//         cout<<"y is biggest of n: "<<y;
//     }
// }

// PRINT NUMBER IN WORDS
// #include<iostream>
// using namespace std;
// int main(){
//     float num1, num2;
//     char op; 
//     cout<<"enter first number: ";
//     cin>>num1;
//     cout<<"enter operator(+, -, *, /): ";
//     cin>>op;
//     cout<<"enter seconf number: ";
//     cin>>num2;
//     if(op=='+'){
//         cout<<"addition= "<<num1 + num2;
//     }
//     else if(op=='-'){
//         cout<<"subtraction= "<<num1 - num2;
//     }
//     else if(op=='*'){
//         cout<<"multiplication= "<<num1 * num2;
//     }
//     else if(op=='/'){
//         cout<<"division= "<<num1 / num2;
//     }
//     else{
//         cout<<"invalid operator";
//     }
// }

// LOOP
// PRINT ALL ODD NUMBER 1 TO 100
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if((i%2)!=0){
//             cout<<i<<" ";
//         }
//     }
// }

// PRINT ALL EVEN NUMBER 1 TO 100
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if((i%2)==0){
//             cout<<i<<" ";
//         }
//     }
// }

// PRINT ALL EVEN NO. 2 TO 50
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=2; i<=50; i++){
//         if((i%2)==0){
//             cout<<i<<" ";
//         }
//     }
// }

// PRINT NO. FROM 100 TO 1
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=100; i>=1; i--){
//         cout<<i<<" ";
//     }
// }

// PRINT 1 TO N
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }

// PRINT 2 TO Y
// #include<iostream>
// using namespace std;
// int main(){
//     int y;
//     cout<<"enter y: ";
//     cin>>y;
//     for(int i=2; i<=y; i=i+2){
//         cout<<i<<" ";
//     }
// }

// PRINT X TO Y
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter x: ";
//     cin>>x;
//     cout<<"enter y: ";
//     cin>>y;
//     for(int i=x; i<=y; i++){
//         cout<<i<<" ";
//     }
// }

// SUM OF DIGIT
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter num: ";
//     cin>>num;
//     int sum = 0;
//     for(int i=num; i>0; i++){
//         int digit = num % 10;
//         sum = sum + digit;
//         num = num / 10;
//     }
//     cout<<"sum of digit: "<<sum;
// }


// FIBONACCI SERIES
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int a = 0; 
//     int b = 1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=3; i<=n; i++){
//         int c = a + b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
// }

// PATTERN PRINTING 
// STAR SQUARE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// STAR RECTANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter rows: ";
//     cin>>n;
//     int y;
//     cout<<"enter column: ";
//     cin>>y;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=y; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// NUMBER RECTANGEL 
// 1111
// 2222
// 3333
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// NUMBER RECTANGEL 
// 1234
// 1234
// 1234
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// 55555
// 44444
// 33333
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5; i>=1; i--){
//         for(int j=5; j>=1; j--){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


// 54321
// 54321
// 54321
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5; i>=1; i--){
//         for(int j=5; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// ARRAY
// PRINT 1D ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0; i<5; i++){
//         cout<< arr[i]<<" ";
//     }
// }

// PRINT ADD TWO ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int brr[5] = {6,7,8,9,10};
//     int sum[5] ;
//     for(int i=0; i<5; i++){
//         sum[i] = arr[i] + brr[i];
//     }
//     cout<<"sum of two arrays: ";
//     for(int i=0; i<5; i++){
//         cout<<sum[i]<<" ";
//     }
// }

// MULTIPLY TWO ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] = {1,2,3,4,5};
//     int b[5] = {6,7,8,9,10};
//     int multiply[5];
//     for(int i=0; i<5; i++){
//         multiply[i] = a[i] * b[i];
//     }
//     cout<<"multiply of two matrix: ";
//     for(int i=0; i<5; i++){
//         cout<<multiply[i]<<" ";
//     }
// }

// SUM OF ALL ELEMENTS IN THE ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] = {10,20,30,40,50};
//     int sum = 0;
//     for(int i=0; i<5; i++){
//         sum = sum + a[i];
//     }
//     cout<<"sum of array elements: "<<sum;
// }


// ALL SUM OF ALL EVEN NO. AND ODD NO. 
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={10,21,32,43,54};
//     int evensum = 0;
//     int oddsum = 0;
//     for(int i=0; i<5; i++){
//         if(a[i]%2==0){
//             evensum += a[i];
//         }
//         else{
//             oddsum +=a[i];
//         }
//     }
//     cout<<"sum of even number: "<<evensum<<endl;
//     cout<<"sum of odd number: "<<oddsum<<endl;
// }

// SUM OF EVEN INDEX AND ODD INDEX NO. 
// #include<iostream>
// using namespace std;
// int main(){
//     int a[6] = {10,20,30,40,50,60};
//     int evenindexsum = 0;
//     int oddindexsum = 0; 
//     for(int i=0; i<6; i++){
//         if(i%2==0){
//             evenindexsum += a[i];
//         }
//         else{
//             oddindexsum += a[i];
//         }
//     }
//     cout<<"sum of even index numbers: "<<evenindexsum<<endl;
//      cout<<"sum of odd index numbers: "<<oddindexsum<<endl;
// }

// 1 number triangle 
// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5; // number of rows

//     for(int i = 1; i <= n; i++) {

//         // spaces
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }

//         // 1s printing
//         for(int j = 1; j <= i; j++) {
//             cout << "1 ";
//         }

//         cout << endl;
//     }
// }


// FIND ARMSTRONG NUMBER 1 TO N
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for(int num = 1; num <= n; num++) {

//         int temp = num;
//         int sum = 0;

//         while(temp > 0) {
//             int digit = temp % 10;
//             sum = sum + (digit * digit * digit); // cube of digit
//             temp = temp / 10;
//         }

//         if(sum == num) {
//             cout << num << " ";
//         }
//     }

//     return 0;
// }


// CHECK NO. IS PALINDROME OR NOT 
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     int temp = n;
//     int rev = 0;

//     for(; temp > 0; ) {
//         int d = temp % 10;
//         rev = rev * 10 + d;
//         temp = temp / 10;
//     }

//     if(rev == n)
//         cout << "Palindrome number";
//     else
//         cout << "Not palindrome";

//     return 0;
// }

// SEARCH KEY VALUE IN ARRAY
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int key;
//     cout << "Enter key to search: ";
//     cin >> key;

//     bool found = false;

//     for(int i = 0; i < 5; i++){
//         if(arr[i] == key){
//             cout << "Key found at index: " << i;
//             found = true;
//             break;
//         }
//     }

//     if(!found){
//         cout << "Key NOT found in array";
//     }

//     return 0;
// }


// 2D MATRIX MULTIPLICATION 
// #include<iostream>
// using namespace std;

// int main() {
//     int a[2][2] = {{1, 2}, {3, 4}};
//     int b[2][2] = {{5, 6}, {7, 8}};
//     int mul[2][2];

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             mul[i][j] = 0;
//             for(int k = 0; k < 2; k++){
//                 mul[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     cout << "Matrix multiplication result:\n";
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             cout << mul[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// SUM OF DIGITS
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     int sum = 0;

//     while(n > 0) {
//         int digit = n % 10;   // last digit
//         sum = sum + digit;    // add to sum
//         n = n / 10;           // remove last digit
//     }

//     cout << "Sum of digits = " << sum;
// }


