#include <bits/stdc++.h>
using namespace std;



int main(){
   


   int x1,v1,x2,v2;

   cin>>x1>>v1>>x2>>v2;


   if(x2>x1 && v2>v1){
    cout<<"NO";
   }
   else if(x1>x2 && v1>v2){
    cout<<"NO";
   }
   else{

    // cout<<"it is inside else";
   

    if(x1<x2){

        // cout<<"it is inside 1st if and inside else";
       
      
            while(x1<x2){

                // cout<<"it is inside the loop";
               
                x1=x1+v1;
                x2=x2+v2;
                
                if(x1==x2){
                    cout<<"YES";
                    exit(0);

                    
                }

                if(x1>x2){
                    cout<<"NO";
                    exit(0);
                   
                }
                
                
            }
            
     
    }

    if(x2<x1){


        while(x2<x1){

                 x1=x1+v1;
                 x2=x2+v2;
                if(x1==x2){
                    cout<<"YES";
                    exit(0);
                }

                if(x2>x1){
                    cout<<"NO2";
                    exit(0);
                }

        }

        

    }

   }



  


   
  

     
    return 0;
}
