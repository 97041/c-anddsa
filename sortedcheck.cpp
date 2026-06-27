#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){

    int t;
    cin>>t;


    for(int i=0;i<t;i++){

          int n;

  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 int flag = 0;

   for(int i=0;i<n-1;i++){
     if(arr[i]>arr[i+1]){
       flag=1;
     }
  }

  if(flag==0){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

    }

 
    return 0;
}