#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;

     cin>>t;

     for(int i=0;i<t;i++){

            int x,y;
  cin>>x>>y;
int* arr = new int[x];
    for(int i=0;i<x;i++){

        cin >> arr[i];
        
    }

    int flag = 0;

    for(int i=0;i<x-2;i++){
        for(int j=i+1;j<x-1;j++){

            for(int k=j+1;k<x;k++){
                if(arr[i]+arr[j]+arr[k]==y){
                    flag=1;
                   
                }
            }
            
        }
    }

    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;

     }
 
 
     

  return 0;


    }
      



 









