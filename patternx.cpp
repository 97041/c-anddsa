#include <bits/stdc++.h>

using namespace std;



int main()
{
    

    int n;
    cin>>n;

    int linesize = n/2;
    int spacesize = n-2;
    int newspacesize = linesize-1;
    int prothomspace = 0;
    int ditiyospace = 1;
    int secondspace = 1;

    if(linesize==0){
        cout<<"X";
    }
    else{

       

          for(int i=1;i<=linesize;i++){

              for(int i=0;i<prothomspace;i++){
                   cout<<" ";
                   }
             cout<<'\\';

                   for(int i=spacesize;i>=1;i--){
                         cout<<" ";
                    }

        cout<<'/';
        cout<<endl;
        spacesize = spacesize - 2;
        prothomspace=prothomspace+1;
    }

    for(int i=0;i<linesize;i++){
        cout<<" ";
    }

     cout<<'X'<<endl;

      

      for(int i=1;i<=linesize;i++){

         for(int i=newspacesize;i>=1;i--){
                         cout<<" ";
         }
        cout<<'/';

        for(int i=ditiyospace;i<=secondspace;i++){

            cout<<" ";

        }

        cout<<'\\'<<endl;
         newspacesize = newspacesize - 1;
         secondspace = secondspace + 2;
    }

   


    }

 

    return 0;
}
