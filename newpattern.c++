// #include<bits/stdc++.h>
// using namespace std;

// void myPat(int n){
//     for(int i = 0; i<n; i++){

//         for(int j=0; j<n; j++){
//              cout<<" * ";
           
//         }
//         cout<<endl;

        
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     myPat(n);

// }

// output

// 5
//  *  *  *  *  * 
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *

// #include<bits/stdc++.h>
// using namespace std;

// void patern1(int n){
//     for(int i = 1; i<=n; i++){
 
//         for(int j=0 ; j<i; j++){
           
//             cout<<"* ";
//         }
//          cout<<endl;
//     }
// }

// // int main(){
// //     int n;
// //     cin>>n;
// //     paternTwo(n);
// // }

// // output

// // 5
// // * 
// // * *
// // * * *
// // * * * *
// // * * * * *

// #include<bits/stdc++.h>
// using namespace std;

// void patern2(int n){
//     for(int i = 1; i<=n; i++){
 
//         for(int j=0 ; j<n-i+1; j++){
           
//             cout<<"* ";
//         }
//          cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     patern1(n);
//     patern2(n);
// }

// output
// 5
// * * * * * 
// * * * *
// * * *
// * *
// *





// #include<bits/stdc++.h>
// using namespace std;

// void paternTwo(int n){
//     for(int i = 1; i<=n; i++){
 
//         for(int j=1 ; j<=n-i+1; j++){
           
//             cout<<j<<" ";
//         }
//          cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     paternTwo(n);
// }
// output

// 5
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1



// #include<bits/stdc++.h>
// using namespace std;

// void paternTwo(int n){
//     for(int i = 1; i<=n; i++){
 
//         for(int j=1 ; j<=i; j++){
           
//             cout<<i<<" ";
//         }
//          cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     paternTwo(n);
// }
// output
// 5
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


// #include<bits/stdc++.h>
// using namespace std;

// void pattern1(int n){
   

//     for(int i= 0; i<n; i++){
        
//         //spaces
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";

//         }
//         //star
//          for(int j=0; j<2*i+1; j++){
//             cout<<"*";

//         }

//         //spaces
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";

//         }

//         cout<<endl;
//     }
// }

// // int main(){
// //      int n;
// //     cin>>n;
// //     pattern1(n);
    

// // }

// // output 

// //  *    
// //    ***
// //   *****
// //  *******
// // *********


// #include<bits/stdc++.h>
// using namespace std;

// void pattern2(int n){
    
   

//     for(int i= 0; i<n; i++){



        
//         //spaces
//         for(int j=0; j<i; j++){
//             cout<<" ";

//         }
//           //star
//          for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*";

//         }
        
//         //spaces
//         for(int j=0; j<i; j++){
//             cout<<" ";

//         }

//         cout<<endl;
//     }
// }

// int main(){
//      int n;
//     cin>>n;
//     pattern1(n);
//     pattern2(n);
    

// }

// // 5
// // *********
// //  *******
// //   *****
// //    ***
// //     *


// #include<bits/stdc++.h>
// using namespace std;

// void print10(int n){
//     for(int i=1; i<=2*n-1; i++){
//         int star = i;
//         if(i > n)star = 2*n-i;
       

//         for(int j = 1; j<=star; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

 

// }

// int main(){
//     int n;
//     cin>>n;
//     print10(n);
// }



// #include<bits/stdc++.h>
// using namespace std;

// void pat5(int n){

//     for(int i = 1; i<=n; i++){

//         for(int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }

// }


// int main(){
//     int n;
//     cin>>n;
//     pat5(n);

// }
