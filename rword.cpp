#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){

    
        string input; 

       cin>>input;

       string newstr;

   int freq[256] = {0};

   for(int i=0;i<input.size();i++){

        newstr += toupper(input[i]);
      
   }


    for(int i=0;i<newstr.size();i++){

        freq[newstr[i] - 'A']++;

    }

    

int arr[5];
int index = 0;

for(int i = 0; i < 256; i++) {
    char letter = 'A' + i;

    if(freq[i] > 0 &&
       (letter == 'E' || letter == 'G' || letter == 'Y' ||
        letter == 'P' || letter == 'T')) {

        arr[index] = freq[i];
        index++;
    }
}


    sort(arr, arr + 5);

    cout<<arr[0];
   

 


    

    
    return 0;
}