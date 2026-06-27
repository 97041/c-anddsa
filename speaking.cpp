#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){

    int t;
    cin>>t;


    for(int k=0;k<t;k++){

      int n;
      cin>>n;

      char word[n];

      for(int i=0;i<n;i++){
        cin>>word[i];
      }
      int flag = 0;
      int counter =0;
       for(int i=0;i<n;i++){
        if(word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u' )
        {
            counter++;
            if(counter == 4){

                flag = 1;

            }
        }
        else{
            counter=0;
        }
      }

      if(flag==1){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }

    }

    
 

  

    
    return 0;
}