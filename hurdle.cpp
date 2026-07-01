#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int n,jumpsize;

    cin>>n>>jumpsize;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = *max_element(arr,arr+n);
    int reqjump=0;

    if(max>jumpsize){
        reqjump = max-jumpsize;
    }

    cout<<reqjump;
 


    return 0;
}
