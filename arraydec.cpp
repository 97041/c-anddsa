#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){

    
     int arr[5] = {10, 20, 30, 40, 50}; 

     int n;

     cin>>n;

     int val;

     cin>>val;

     int newarr[6] = {}; 

     for(int i=0;i<5;i++){
        newarr[i]=arr[i];
     }

     newarr[6-1]=val;

     int temp;
       

     for(int i=5;i>=n+1;i--){
        for(int j=i-1;j>=n;j--){

            temp=newarr[j];
            newarr[j]=newarr[i];
            newarr[i]=temp;

        }
     }

     for(int i=0;i<6;i++){
        cout<<newarr[i]<<" ";
     }


 


    

    
    return 0;
}