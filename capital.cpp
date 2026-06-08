#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    char x;

    cin>>x;

    
    int s=(int)x;
   

    if(s>=48 && s<=57){ 

        cout<< "IS DIGIT";

    }
    else if(s>=65 && s<=90){
        cout<< "ALPHA" << endl;
        cout<< "IS CAPITAL";
    }
    else{
        cout<< "ALPHA" << endl;
        cout<< "IS SMALL";
    }

   


   
    return 0;
}