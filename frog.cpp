#include <bits/stdc++.h>
using namespace std;



int main(){
   

 int n;
 cin>>n;

 char steps[n];


 for(int i=0;i<n;i++){

    cin>>steps[i];

 }

 int counter = 0;
 int resultcounter = 0;


 for(int i=0;i<n;i++){
    if(steps[i]=='U'){
        counter++;
    }
    else{
      
            counter--;
      
    }

    if(steps[i]=='D' && counter==-1){
        resultcounter++;
    }
    
 }

 cout<<resultcounter;

  


   
  

     
    return 0;
}
