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

int count = 0;
int limit = 0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arrone[i]+1==arrone[j] && limit<1){
            count++;
            limit=limit+1;
            
        }
    }
    limit=0;
}

cout<<count;


    
    return 0;
}