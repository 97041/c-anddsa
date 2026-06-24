#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

             int n,m;

             cin>>n>>m;

    char finalist1[n];
    char finalist2[m];

	

    for(int i=0;i<n;i++){
        cin>>finalist1[i];
    }

    for(int i=0;i<m;i++){
        cin>>finalist2[i];
    }

    for(int i=0;i<m;i++){
        if(finalist1[i]==finalist2[i]){
            cout<<finalist1[i];
        }
        else{
            break;
        }
    }

    cout<<endl;

    }

   


    return 0;

}
