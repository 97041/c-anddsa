#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){

  int t;

  cin>>t;

  for(int i=0;i<t;i++){

    int n;
  int sx;
  int q;

  cin>>n>>sx;

  
    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

      int indx;
      cin>>q;

  if(sx!=0){
     indx=q-1;
  }
  else{
    indx=q;

  }

 


int allZero = 1, allOne = 1;

for (int i = 0; i < n; i++) {
    if (arr[i] != 0) allZero = 0;
    if (arr[i] != 1) allOne = 0;
}

int flag = allZero || allOne;

// cout << "dfd"<< flag;

// for (int i = 0; i < n; i++) {
//     if (arr[i] != 0) {
//         flag = 1;
//         break;
//     }
// }

    int count=0;

    if(flag==0){

        if(arr[indx]==0){
      if(indx>0){
        for(int i=indx;i<n;i++){
          if(arr[i]==0){
            arr[i]=1;
            count++;
          }
        }

        for(int i=0;i<indx;i++){
          if(arr[i]==0){
            arr[i]=1;
            count++;
          }
        }
      }
      else{
        for(int i=0;i<n;i++){
          if(arr[i]==0){
            arr[i]=1;
            count++;
          }
        }
      }
    }
    else{

       if(indx>0){
        for(int i=indx;i<n;i++){
          if(arr[i]==1){
            arr[i]=0;
            count++;
          }
        }

        for(int i=0;i<indx;i++){
          if(arr[i]==1){
            arr[i]=0;
            count++;
          }
        }
      }
      else{
        for(int i=0;i<n;i++){
          if(arr[i]==1){
            arr[i]=0;
            count++;
          }
        }
      }

    }

    }

    

  

    if(count!=0){

      cout<<count+1;

    }
    else{
      cout<<count;
    }


    
    cout<<endl;

  }

  

     
    return 0;
}
