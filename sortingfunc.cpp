#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int* sort_it(int x){

      int* arr = new int[x];

    for(int i=0;i<x;i++){
        cin>> arr[i];
    }

  sort(arr,arr+x,greater<int>());

  return arr;

}

int main(){
  
    int n;
    cin>> n;

    int *ptr;

    ptr=sort_it(n);

      for(int i=0;i<n;i++){
        cout<< ptr[i]<<" ";
    }

    return 0;
}
