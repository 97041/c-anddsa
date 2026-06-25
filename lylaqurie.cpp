#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){


           string s;
   cin>>s;

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

   

   int leftrange,rightrange;
   cin>>leftrange>>rightrange;

   int slength = s.length();

   char convert[slength+1];

   for(int i=1;i<slength+1;i++){

     convert[i]=s[i-1];
     
   }



 int count = 0;



 for(int i=leftrange;i<rightrange;i++){

    if(convert[i]==convert[i+1]){
        count++;
    }

 }

 cout<<count<<endl;

    }
   



//     for(int i=1;i<=slength;i++){
//     cout<<prefix[i];
//    }

//    cout<<endl;

//    cout<<prefix[rightrange]-prefix[leftrange];






  

   




   return 0;




}