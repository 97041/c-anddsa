#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

            int n;
     cin>>n;

     int* arr= new int[n];

     int evencount = 0;
     int oddcount = 0;

       for(int i=0;i<n;i++){
         cin >> arr[i];
        }

     if(n%2==1){
        cout<<-1<<endl;
     }
     else{ 

        int half=n/2;
        int counteroflegend;
        
      

        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                evencount++;
            }
            else{
                oddcount++;
            }

        }


        if(evencount==oddcount){
            cout<< 0 <<endl;
            
        }
        else if(evencount>oddcount){

            counteroflegend = evencount-half;
            cout<< counteroflegend << endl;
            

        }
        else{
            counteroflegend = oddcount-half;
            cout<<counteroflegend <<endl;
        }

     }


    }
    
   





    return 0;
        
    }