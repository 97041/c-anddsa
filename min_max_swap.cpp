#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b;
    cin >> a>>b;

    cout <<min(a,b);
    cout <<max(a,b);
    //min function can find the minimum value from lots of values but you have to use 2nd bracket.
     //max function can find the maximum value from lots of values but you have to use 2nd bracket.

     swap(a,b);
     //you can swap two values by using swap function


    return 0;

}