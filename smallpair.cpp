#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    for(int i=0;i<testcase;i++){


        int n;
  cin>>n;

  int* arr = new int[n];


  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  int sum=0;

  int lowestcontainer=0;

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

        sum=sum+arr[i] +arr[j]+(j+1)-(i+1);


        if(j==1){
            lowestcontainer=sum;
        }
        else{

               if(sum < lowestcontainer){
               lowestcontainer = sum;
            }

        }

        

         

        

      
   
         

            sum=0;
     

    }

     
    
  }

  cout<<lowestcontainer<<endl;

    }
      



 








    return 0;
}

