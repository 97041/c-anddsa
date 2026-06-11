#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){


    string robarto; 


      

      while(getline(cin, robarto)){
        

       
     
    
  robarto.erase(remove(robarto.begin(), robarto.end(), ' '), robarto.end());
    
    sort(robarto.begin(),robarto.end());
    cout << robarto << "\n"; 

   

      }

      

   
     
    return 0;
}
