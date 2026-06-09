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

    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
           swap(arr[i],arr[j]);
        }
    }
    

    for(int i=0;i<x;i++){
        if(i!=x-1){

            cout << arr[i] << " ";

        }
        else{

              cout << arr[i];

        }
        
    }




    return 0;
}

