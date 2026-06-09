#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x;
    cin>>x;
    int* arr = new int[x];

    for(int i=0;i<x;i++){

        cin >> arr[i];
        
    }

    int highest=arr[0];

    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            int jrq;
           jrq=max(arr[i],arr[j]);
           if(jrq>highest){
            highest=jrq;
           }
        }
    }
   cout << highest;

    return 0;
}
