#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){

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

    int count=0;

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

    // for(int i=0;i<n;i++){
    //   cout<<arr[i];
    // }

    cout<<count;

     
    return 0;
}
