#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x;
    char s;
    int y;
    cin>>x >>s>> y;
   

    int numb = int(s);

    if(numb==62){
        if(x > y){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(numb==60){
        if(y>x){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(numb==61){
        if(x==y){

            cout<<"Right";

        }
        else{
            cout<<"Wrong";
        }
    }


    return 0;
        
    }




   
   

 
  
