#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

   string original;
   cin>>original;

   string  reversed=original;

   reverse(reversed.begin(),reversed.end());

   if(original==reversed){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }


   return 0;




}