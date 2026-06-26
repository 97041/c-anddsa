#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){

    
 int n;
 cin>>n;

 int arr[n];

 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 int vlw;

 cin>>vlw;

 sort(arr,arr+n);

 int l=0; int h=n-1;

 while(l<=h){
    int mid = (l+h)/2;

    if(arr[mid]==vlw){
      cout<<"YES";
      return 0;
    }
    else if(arr[mid]>vlw){
      h=mid-1;
    }
    else{
      l=mid+1;
    }
 }

 cout<<"NO";

  

    
    return 0;
}