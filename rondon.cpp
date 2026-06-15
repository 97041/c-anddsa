#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){

    int t;

    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;


        string input; 

    cin>>input;

   int freq[256] = {0};


    for(int i=0;i<input.size();i++){

        freq[input[i] - 'A']++;

    }

    int sum=0;
    int allsum=0;

    for(int i=0;i<256;i++){
        char letter = 'A' + i;
        if(freq[i]>1){

             sum=freq[i]+1;

        }
        else if(freq[i]==1){
            sum=2;
        }
        else{
            sum=0;
        }

        allsum = allsum+sum;
      
    }
    cout<<allsum<<endl;

    }


    

    
    return 0;
}
