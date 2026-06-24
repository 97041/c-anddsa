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

for(int i=n-1;i>=0;i--){

    cout<< arrone[i]<<" ";

}



    
    return 0;
}