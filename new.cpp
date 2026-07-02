#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;

    cin>>t;


    for(int i=0;i<t;i++){

           int n,k;

   cin>>n>>k;

   int arr[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   int minval;
   int holderarr[n];

   if(k==2 || k==3 || k==5){

      for(int i=0;i<n;i++){
         int cost = (k-(arr[i]%k))%k;
         if(i==0){
            minval = cost;
            
         }
         else{
            minval= min(minval,cost);
         }
   }

      
   }
   else{

    int case1min = INT_MAX;

        for(int i=0;i<n;i++){

             int c1 = (4-(arr[i]%4))%4;
        case1min = min(case1min, c1);

        int c2 = arr[i]%2;
        holderarr[i]=c2;
      
   }

   sort(holderarr,holderarr+n);

   
   int case2min= holderarr[0]+holderarr[1];

   minval = min(case1min, case2min);
 

  

}

 cout<<minval<<endl;

    }
    

  


    return 0;
}
