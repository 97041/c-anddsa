#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){

       int n;

       cin>>n;

       int val;

       cin>>val;


       int arrunsorted[n];

            for(int i=0;i<n;i++){
       
                 cin>>arrunsorted[i];
           }

           sort(arrunsorted, arrunsorted + n);

        //         for(int i=0;i<n;i++){
       
        //           cout<<arrunsorted[i];
        //    }

        
           int low=0;

           int high=n-1;

           while (low<=high)
           {

              int mid = (high-low)/2;

              if(arrunsorted[mid]==val){
                cout<<"found at "<<mid;
                return 0;
              }
              else if(arrunsorted[mid]>val){
                
                high=mid-1;
              }
              else{

                low=mid+1;
                
              }
               
           }
           

         

           cout<<"Not found";

     


   return 0;




}