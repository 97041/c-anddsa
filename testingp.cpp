#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){


int n,w;

cin>>n>>w;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}



    // vector<int> prefix(n+1);

int windowsum=0;

// for(int i=0;i<n-(w-1);i++){
//     for(int j=i+1;j<w+i;j++){

//         sum=sum+arr[j];
        

       
        
//     }
//     sum=sum+arr[i];
//     // cout<<sum<<endl;

//     prefix[i]=sum;
//     sum=0;
// }

for(int i=0;i<w;i++){
    windowsum=windowsum+arr[i];
}

int minsum=windowsum;

// int arraysum[n-w];

vector<int> arraysum(n-w+1);
arraysum[0]=windowsum;

for(int i=w;i<n;i++){
 windowsum +=arr[i];
 windowsum -=arr[i-w];
 arraysum[i-w+1]=windowsum;

 minsum=min(minsum, windowsum);
}

// for(int i=0;i<n-w+1;i++){
//     cout<<arraysum[i]<<" "<<endl;
// }

int ghetibekapacha = min_element(arraysum.begin(),arraysum.end())-arraysum.begin();
cout<<ghetibekapacha+1;

// int min=prefix[0];

// for(int i=0;i<n-(w-1);i++){
//     cout<<prefix[i]<<" ";
// }
// cout<<endl;

// for(int i=0;i<n-(w-2);i++){
//     for(int j=i+1;j<n-(w-1);j++){

//         if(min>prefix[j]){
//             min=prefix[j];
//         }

//     }
// }

// cout<<minsum;

// for(int i=0;i<n-(w-1);i++){
//     if(arr[i]==minsum){
//         cout<<i+1;
//         break;
//     }
// }

// }




   return 0;




}