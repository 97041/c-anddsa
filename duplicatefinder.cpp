#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){
   

    long long int n;

    cin>>n;

   long long int arr[n];

    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    auto it = unique(arr,arr+n);

    long long int newsize=it-arr;

    if(newsize == n){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

  

     
    return 0;
}
