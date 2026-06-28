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

    vector<std::string> stringArray2;

    
    for (int i = 0; i < numberof2; i++) {
        string currentInput;
        
       getline(cin, currentInput); 
        stringArray2.push_back(currentInput);
    }

    int count = 0;

    for(int i=0;i<numberof2;i++){
       for(int j=0;j<numberOfInputs;j++){

        if(stringArray2[i]==stringArray[j]){
            count++;
         }

       }
       cout<<count<<endl;
       count=0;
    }




  


   
  

     
    return 0;
}
