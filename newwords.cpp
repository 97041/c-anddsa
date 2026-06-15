#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){


    string input; 

    cin>>input;

    string replace_word = "EGYPT";
    string replaced = " ";

    size_t position = input.find(replace_word);

    while(position !=string::npos){
        input.replace(position,replace_word.size(),replaced);

        position = input.find(replace_word,position + replaced.size());
    }

    cout<< input;
    
   

 
    
    return 0;
}
