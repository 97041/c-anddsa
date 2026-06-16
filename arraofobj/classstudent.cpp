#include <iostream>
#include <algorithm>
using namespace std;

class Student 
{

    public:
	       string name;
	        int roll;
	        int marks;
};



int main(){


    int n;
    cin>>n;

    Student arrofobj[n];

    for(int i=0;i<n;i++){
        cin>>arrofobj[i].name>>arrofobj[i].roll>>arrofobj[i].marks;
    }

   

     for(int i=0;i<n;i++){
        cout<<arrofobj[i].name<<arrofobj[i].roll<<arrofobj[i].marks<<endl;
    }

    
  return 0;
        
    }