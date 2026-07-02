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

        for(int i=0;i<n;i++){

            int cost;
         
            if(arr[i]%2==0){

                cost = 0;

            }
            else{
                cost = 1;
            }

            holderarr[i]=cost;
      
   }

   sort(holderarr,holderarr+n);

   if(k==4){
   minval= holderarr[0]+holderarr[1];
   }

   cout<<minval<<endl;

}

    }
    

  


    return 0;
}
