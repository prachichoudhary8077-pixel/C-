// PRINT N TO 1
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(n);
// }

// PRINT 1 TO N
// #include<iostream>
// using namespace std;
// void print(int x, int a){
//     if(x>a) return;
//     cout<<x<<endl;
//     print(x+1,a);
// }
// int main(){
//     int a;
//     cout<<"enter a: ";
//     cin>>a;
//     print(1,a);
// }

// PRINT 1 TO N WITHOUT USING THIRD VARIABLE
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(n);
// }

// SUM FROM 1 TO N  (check)
// #include<iostream>
// using namespace std;
// void sump(int n, int sum){
//     if(n<1){
//         cout<<"sum = "<<sum;
//         return;
//     }
//     sump(n-1, sum+n);
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     sump(n , 0);
//     return 0;
// }

// ARRAYS
// SYNTAX (1st methord)
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5];
//     cout<<"enter array: ";
//     for(int i=0; i<=4; i++){
//         cin>>a[i];
//     }
//     // a[0] = 2;
//     // a[1] = 3;
//     // a[2] = 4;
//     // a[3] = 5;
//     // a[4] = 6;
//     for(int i=0; i<=4; i++){
//         cout<<a[i]<<" ";
//     }
//     // cout<<a[0]<<" ";
//     // cout<<a[1]<<" ";
//     // cout<<a[2]<<" ";
//     // cout<<a[3]<<" ";
//     // cout<<a[4]<<" ";
// }

// 2nd methord(sidha print)
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] = {1,2,3,4,5};
//     for(int i=0; i<=4; i++){
//         cout<<a[i]<<" "<<endl;
//         cout<<a[i]*2<<" ";
//     }
// }

// ulta print
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=4; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
// }

// PASS BY REFERENCE
// #include<iostream>
// using namespace std;
// void change(int arr[]){
//     arr[0] = 9;
// }
// int main(){
//     int arr[3] = {1,2,3};
//     for(int i=0; i<=2; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     change(arr);
//     for(int i=0; i<=2; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// SUM OF ALL ELEMENTS IN THE GIVEN ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5];
//     cout<<"enter array: ";
//     for(int i=0; i<=4; i++){  // taking input array
//         cin>>a[i];
//         cout<<" ";
//     }
//     // for(int i=0; i<=4; i++){  // output array
//     //     cout<<a[i]<<" ";
//     // }
//     int sum = 0;
//     for(int i=0; i<=4; i++){  // sum array
//         sum = sum + a[i];
//     }
//     cout<<endl;
//     cout<<"sum the array: "<<sum;
// }

// important
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int n = sizeof(arr)/4;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     cout<<sum;
// }

// PRODUCT OF GIVEN ELEMENT OF THE ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5];
//     for(int i=0; i<=4; i++){
//         cin>>a[i];
//     }
//     int product = 1;
//     for(int i=0; i<=3; i++){
//         product = product * a[i];
//     }
//     cout<<"product of the given array: "<<product;
// }

// MAX VALUE OUT OF ALL ELEMENTS OF ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5];
//     // int n = sizeof(a)/4;
//     cout<<"enter array: ";
//     for(int i=0; i<=4; i++){
//         cin>>a[i];
//     }
//     int mx = a[0]; 
//     for(int i=1; i<5; i++){
//         if(a[i]>mx) mx = a[i];
//    // mx = max(mx,a[i]);
//     }
//     cout<<mx;
// }

// MINIMUM OF THE ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5];
//     // int n = sizeof(a)/4;
//     cout<<"enter array: ";
//     for(int i=0; i<=4; i++){
//         cin>>a[i];
//     }
//     int mn = a[0]; 
//     for(int i=1; i<5; i++){
//         if(a[i]<mn) mn = a[i];
//     }
//     cout<<mn;
// }


// PRINT SQUARE OF THE ELEMENT OF THE ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5];
//     // input from user
//     cout<<"enter array of 5 element: ";
//     for(int i=0; i<=4; i++){
//         cin>>a[i];
//     }
//     // print square of each element
//     cout<<"square of elements: ";
//     for(int i=0; i<=4; i++){
//         cout<<a[i] * a[i]<<" ";
//     }
// }


// ODD INDEX -> SECOND MULTIPLE AND EVEN INDEX -> INCREMENT BY 10
// #include<iostream>
// using namespace std;
// int main(){
//     int a[6];
//     cout<<"enter array 6 element: ";
//     // input from user
//     for(int i=0; i<=5; i++){
//         cin>>a[i];
//     }
//     // print
//     for(int i=0; i<=5; i++){
//         if((a[i]%2)==0){
//             a[i] = a[i] + 10;
//             cout<<endl;
//         }
//         else{
//             if(a[i]%2!=0){
//                 a[i] = a[i] * 2 ; 
//             }
//         }
//         cout<<"updated array: ";
//         for(int i=0; i<=5; i++){
//             cout<< a[i]<<" ";
//         }
//     }
// }


// SUM OF ELEMENTS AT EVEN INDICES AND ODD INDICES
// #include<iostream>
// using namespace std;
// int main(){
//     int a[] = {1,2,3,4,5,6,7};
//     int sum = 0; 
//     int s1 = 0;
//     for(int i=0; i<=6; i++){
//         if(a[i]%2==0){
//             sum = sum + a[i];
//         }
//         else{
//             s1 = s1 + a[i];
//         }
//     }
//     cout<<"sum of even index: "<<sum<<endl;
//     cout<<"sum of the odd index: "<<s1;
// }


// SECOND LARGEST ELEMENT 
// #include<iostream>
// #include<cstring>
// #include<climits>
// using namespace std;
// int main(){
//     int a[] = {1,2,3,4,5,6};
//     int n = sizeof(a)/4;
//     int mx = INT_MIN;
//     for(int i=0; i<n; i++){
//         mx = max(mx,a[i]);
//     }
//     int smx = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(a[i]!=mx) {
//             smx = max(smx,a[i]);
//         }
//     }
//     cout<<smx;
// }


// COPY ONE ARRAY INTO ANOTHER ARRAY IN REVERSE ORDER
// #include<iostream>
// #include<cstring>
// #include<climits>
// using namespace std;
// int main(){
//     int s1[5] = {1,2,3,4,5};
//     int n = sizeof(s1)/4;
//     int s2[5]; 
//     for(int i=0; i<=n; i++){
//         int j = n-1-i;
//         s2[i] = s1[j];
//     }
//     for(int i=0; i<n; i++){
//         cout<<s2[i]<<" ";
//     }
// }


