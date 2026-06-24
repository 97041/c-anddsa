#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,pair;
    cin>>n>>pair;
    

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<pair;i++){

        int x,y;
        cin>>x>>y;

    

        sum = accumulate(arr.begin()+x-1, arr.begin()+y, 0);

        cout<<sum;
        cout<<endl;
        sum=0;
    }
 

    return 0;
}
