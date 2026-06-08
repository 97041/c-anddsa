#include <iostream>
using namespace std;

int main(){
    int x,y;

    cin >> x >> y;

    long long int z=x+y;
    long long int s=(long long)x*y;
    long long int q=x-y;

    cout << x <<" + "<< y <<" = "<< z <<endl;
    cout << x <<" * "<< y <<" = "<< s <<endl;
    cout << x <<" - "<< y <<" = "<< q <<endl;


    return 0;
}