#include <iostream>
#include <algorithm>
#include <string>
 #include <vector>
using namespace std;



int main(){

    
   

// int n;
// cin>>n;

int arr[] = {1,2,3,1,2,3};
int size = sizeof(arr) / sizeof(arr[0]);

int sum=0;




for(int i=0;i<size;i++){

    sum=sum+arr[i];

    
  
    
}
int rightsum=0;
int leftsum=0;

for(int i=0;i<size;i++){

  
   
   rightsum = sum - leftsum - arr[i];
   leftsum=leftsum+arr[i];

   if(leftsum==rightsum){
    cout<<i+1;
    break;
   }

   
    
}

// cout<<sum<<" ";

  

    
    return 0;
}