#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){

    int t;
    cin>>t;


    for(int k=0;k<t;k++){

          int n;
 cin>>n;

 int arr[n];

 int sum=0;

 for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
 }

 int flag = 0;


  for(int i=0;i<n;i++){
     int z= sum - arr[i];

      if(z%2==0){
        flag=1;

      }
    
 }

 if(flag==1){
    cout<<"Yes"<<endl;
 }
 else{
    cout<<"No"<<endl;
 }

    }

    
 

  

    
    return 0;
}