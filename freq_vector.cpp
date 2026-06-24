#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){


  string s;

  cin>>s;


    vector<int> freq(135, 0);

    for(int x : s){

       

        freq[x]++;

    }

    for(int i=0;i<135;i++){
        if(freq[i]>0){
            cout<<(char)i<<" "<<":"<<" "<<freq[i]<<endl;
        }
    }


    
    return 0;
}