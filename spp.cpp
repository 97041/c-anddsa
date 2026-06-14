#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        string s;
   cin>>s;
   

    int k=0;
    int firstcount =0;
    int secondcoount=0;

    while(k < s.length()){

        int num= s[k]-48;

        

        if(k<3){
            firstcount = firstcount +num;
        }
        else{
            secondcoount= secondcoount + num;

        }
        k++;

    }

    if(firstcount==secondcoount){
       cout<<"YES";
       cout<<endl;
    }
    else{

        cout<<"NO";
        cout<<endl;

    }

    }

   

   return 0;




}