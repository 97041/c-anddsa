#include <bits/stdc++.h>
using namespace std;



int main(){
   

  int arr1[3];

  int brr2[3];

  for(int i=0;i<3;i++){
    cin>>arr1[i];
  }

    for(int i=0;i<3;i++){
    cin>>brr2[i];
  }

  int points[2]={0,0};

  for(int i=0;i<3;i++){
    if(arr1[i]>brr2[i]){
        points[0]++;
    }
     if(arr1[i]<brr2[i]){
        points[1]++;
    }
  }

      for(int i=0;i<2;i++){
    cout<<points[i];
    cout<<" ";
  }



 


     
    return 0;
}
