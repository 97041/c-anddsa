#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){


int n;
cin>>n;

vector<int> arrone(n); 

for(int i=0;i<n;i++){

    cin>> arrone[i];

}

for(int i=0;i<n;i++){

    if(arrone[i]>0){
        arrone[i]=1;
    }
    else if(arrone[i]<0){
        arrone[i]=2;
    }
    else{
        arrone[i]=0;
    }

}

for(int i=0;i<n;i++){

   cout<<arrone[i]<<" ";

}



    
    return 0;
}