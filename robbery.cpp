#include <bits/stdc++.h>
using namespace std;



int main(){
   

 int numberOfInputs;
    
    cin >> numberOfInputs;
    
    // Ignore the leftover newline character from std::cin
    cin.ignore(); 

    vector<std::string> stringArray;

    
    for (int i = 0; i < numberOfInputs; i++) {
        string currentInput;
        
       getline(cin, currentInput); 
        stringArray.push_back(currentInput);
    }

     int numberof2;

      cin >> numberof2;
    
    // Ignore the leftover newline character from std::cin
    cin.ignore(); 

    vector<std::string> stringArray;

    
    for (int i = 0; i < numberof2; i++) {
        string currentInput;
        
       getline(cin, currentInput); 
        stringArray.push_back(currentInput);
    }




  


   
  

     
    return 0;
}
