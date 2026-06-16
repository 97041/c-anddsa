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

bool cmp(Student p,Student q){
    if(p.marks > q.marks){
        return true;
    }
    else if(p.marks==q.marks){
        if(p.roll < q.roll){
            return true;
        }
    }
    else {
        return false;
    }
}

int main(){


    int n;
    cin>>n;

    Student arrofobj[n];

    for(int i=0;i<n;i++){
        cin>>arrofobj[i].name>>arrofobj[i].roll>>arrofobj[i].marks;
    }

    sort(arrofobj,arrofobj+n,cmp);

     for(int i=0;i<n;i++){
        cout<<arrofobj[i].name<<arrofobj[i].roll<<arrofobj[i].marks<<endl;
    }

    
  return 0;
        
    }