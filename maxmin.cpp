#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;


    int maxi = max({x,y,z});
    int mini = min({x,y,z});

    cout<<mini<<" "<<maxi;
   

 
  

    return 0;
}
