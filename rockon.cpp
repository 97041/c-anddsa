#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin>> t;

     int id;
    string name;
    char section;
    int totalmarks;

    int id2;
    string name2;
    char section2;
    int totalmarks2;

     int id3;
    string name3;
    char section3;
    int totalmarks3;

    for(int i=0;i<t;i++){

   

    cin>>id >>name >>section >>totalmarks;
    cin>>id2 >>name2 >>section2 >>totalmarks2;
     cin>>id3 >>name3 >>section3 >>totalmarks3;

     int highestmark=totalmarks;

     if(totalmarks <= totalmarks2 && totalmarks2 >= totalmarks3){
        highestmark=totalmarks2;
     }
     else if(totalmarks3 >= totalmarks && totalmarks3 >= totalmarks2 ){
        highestmark= totalmarks3;
     }

     if(highestmark==totalmarks){
        cout << id << " "<< name <<" "<< section <<" "<< totalmarks;
     }
     else if(highestmark==totalmarks2){
        cout << id2 << " "<< name2 <<" "<< section2 <<" "<< totalmarks2;
     }
     else{
          cout << id3 << " "<< name3 <<" "<< section3 <<" "<< totalmarks3;
     }

     cout<<endl;


    }
   

    


    return 0;
}

