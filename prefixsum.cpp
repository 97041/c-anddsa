#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<int> v(n+1);

   for(int i=1;i<=n;i++){
      cin>>v[i];
   }

   vector<int> prefix(n+1);

   prefix[1] = v[1];


   for(int i=2;i<=n;i++){
    prefix[i]=prefix[i-1]+v[i];
   }

   for(int i=1;i<=n;i++){
    cout<<prefix[i]<<" ";
   }
   int leftrange,rightrange;

   cin>>leftrange>>rightrange;

   if(leftrange>1){

    cout<< prefix[rightrange]-prefix[leftrange-1];

   }
   else{

    cout<< prefix[rightrange];

   }

   




   return 0;




}