#include <bits/stdc++.h>
using namespace std;



int main(){
   

  int n;

    cin >> n;

    vector<int> arr(n);

  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

      int m;

    cin >> m;

    vector<int> arr2(m);

  
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int x;
    cin>>x;

    int k=n+m;

    vector<int> combinearr(k);

   
    for(int i=0;i<x;i++){
       combinearr[i]=arr[i];
    }

    

       for(int i=x;i<x+m;i++){
       combinearr[i]=arr2[i-x];
    }

       for(int i=x+m;i<x+m+(n-x);i++){
       combinearr[i]=arr[i-m];
    }

         for(int i=0;i<k;i++){
       cout<<combinearr[i]<<" ";
    }



  


   
  

     
    return 0;
}
