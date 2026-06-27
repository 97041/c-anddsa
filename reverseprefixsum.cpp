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

  

    long long int prefix[n];

    prefix[0]=arr[0];

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }

  

    reverse(prefix,prefix+n);

     for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }


     
    return 0;
}
