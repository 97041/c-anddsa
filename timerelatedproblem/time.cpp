#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    for(int i=0;i<t;i++){
        int n;

        cin>>n;

        char s[n];

        for(int i=0;i<n;i++){
            cin>>s[i];
        }

        // char sticker[n];

        int zerocount = 0;
        int onecount = 0;
        int othersdigit = 0;

         for(int i=0;i<n;i++){
           if(s[i]=='0'){
             zerocount++;
           }
           else if(s[i]=='1'){
            onecount++;
           }
           else{
              othersdigit++;
           }
        }

        //   cout<<zerocount<<" "<<onecount<<" "<<othersdigit;
        int result1;
        if(zerocount==othersdigit){
            result1=zerocount/2;
        }
        else if(zerocount>3 && othersdigit==0){
            result1=zerocount/4;
        }
        else{

            result1 = min(zerocount,othersdigit);

        }

           
          int result2= min(onecount,othersdigit);

          int result2mod;

          if(result2 ==1){
            result2mod = 0;
          }
          else{
            result2mod = result2;
          }
          int finalresult = result1+result2mod;

          cout<<finalresult<<endl;

    }
   
    return 0;
}