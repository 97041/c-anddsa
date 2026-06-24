#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){

    
   

int n;
cin>>n;

vector<int> arrone(n); 

vector<int> arrtwo(n); 

int f=n*2;

vector<int> arrc(f);



for(int i=0;i<n;i++){

    cin>> arrone[i];

}

for(int i=0;i<n;i++){

   cin>> arrtwo[i];

}




for(int i=0;i<n;i++){
    arrc.insert(arrc.begin()+i,arrtwo[i]);
}

for(int i=0;i<n;i++){
    arrc.insert(arrc.begin()+n+i,arrone[i]);
}

for(int i=0;i<f;i++){
    cout<<arrc[i]<<" ";
}


    
    return 0;
}