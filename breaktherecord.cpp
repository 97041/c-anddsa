#include <bits/stdc++.h>
using namespace std;



int main(){
   

  int n;

  cin>>n;

  int scorearr[n];

   for(int i=0;i<n;i++){
     cin>>scorearr[i];
   }

   int min = scorearr[0];

   int mtq = scorearr[0];

   int count = 0;

   int count2 = 0;

    for(int i=1;i<n;i++){
      
      if(min<scorearr[i]){
           min=scorearr[i];
           
           count++;

      }

      if(mtq>scorearr[i]){
        mtq = scorearr[i];

        count2++;
      }
    }

    cout<<count<<" "<<count2;
 


     
    return 0;
}
