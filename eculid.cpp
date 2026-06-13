#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;

    cin>>t;

    for(int i=0;i<t;i++){

           int n;
    cin>>n;
    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    int flag=0;

     for(int i=2;i<n;i++){
      
        
             if(arr[i] != arr[i-2] % arr[i-1]){
                   flag=1;
                   break;
               }
         }
 

        
    

        if(flag==0){
        cout<<arr[0]<<" "<<arr[1];
    }
    else{
        cout<<"-1";
    }

    cout<<endl;

    }

   

     return 0;


}