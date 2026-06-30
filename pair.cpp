#include <bits/stdc++.h>
using namespace std;



int main(){
   

   int n;
   cin>>n;

   int arr[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

      int freq[101] = {0};


   for(int i=0;i<n;i++){

      freq[arr[i]]++;
   
   }

   int paircounter = 0;

     for(int i=0;i<101;i++){

        int num;

        

      if(freq[i]>1){

      

         num=freq[i]/2;

         paircounter=paircounter+num;

      }

      
   
   }


   cout<<paircounter;

 
    return 0;
}
