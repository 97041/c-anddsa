#include <iostream>
// #include<bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >> x;
    // cin.ignore();
    char s[100];

    cin.getline(s,100);
    //cin.getline can take the full string input from user including space but you can't take full string input from usre by usin only cin

    cout << x << endl <<s << endl;
 

    return 0;
}
