#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int min_val = *min_element(arr, arr + n);

   int cutarr[n];

   cutarr[0]=n;

   

   for(int i=0;i<n;i++){
        arr[i]=arr[i]-min_val;

        if(arr[i]!=0){

        }
   }
 


    return 0;
}
