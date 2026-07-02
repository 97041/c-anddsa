#include <bits/stdc++.h>
using namespace std;

int main(){


    string time;

    cin>>time;



    if(time[8]=='P'){

         if(time[0]=='0' && time[1]>0){
            time[0]='1';
            if(time[1]=='8'){

              time[1]='0';

            }
          
            else if(time[1]=='9'){
                time[1]='1';
            }
            else{
                   int num=time[1]-'0';
            int conversion = num+2;
            char c= '0'+conversion;
            time[1]=c;

            }

           
         
       
        for(int i=0;i<8;i++){
           
            
            cout<<time[i];
        }

    }
   
}

 return 0;
}


 



