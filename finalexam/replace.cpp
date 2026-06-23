#include <bits/stdc++.h>
#include <string>

using namespace std;




int main()
{

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

    string s;
    string word;
    

    cin>>s>>word;

    int pos = 0;
    while((pos=s.find(word,pos)) != string::npos){
       s.replace(pos,word.length(),"#");
       pos = pos + 1;

    }

    cout<<s<<endl;

    }

    

   

    return 0;
}
