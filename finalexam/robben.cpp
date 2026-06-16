#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    string collection;
    getline(cin, collection);

    stringstream ss(collection);

    string word;

    int flag=0;

    while(ss>>word){
        if(word=="Jessica"){
            flag=1;
        }
        
    }

    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
