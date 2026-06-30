#include <bits/stdc++.h>
using namespace std;



int main(){
   

   // declaring a 2d matrix

   int n;

   cin>>n;

   int arr[n][n];

   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        cin>>arr[i][j];
     }
   }
   int primarydiagonalsum=0;
   int secondarysum = 0;

     for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(j==(n-i-1)){
          secondarysum = secondarysum+arr[i][j];
        }

        if(i==j){
            primarydiagonalsum = primarydiagonalsum+arr[i][j];
        }
     }
   }

//    cout<<secondarysum<<endl;

//    cout<<primarydiagonalsum<<endl;

int absdif = abs(primarydiagonalsum-secondarysum);

cout<<absdif;


     
    return 0;
}
