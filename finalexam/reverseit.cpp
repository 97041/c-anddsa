#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
       string nm;
       int cls;
       char s;
       int id;

};



int main()
{

    int n;
    cin>>n;

    Student arrayofobj[n];


     for(int i=0;i<n;i++){
        cin>>arrayofobj[i].nm>>arrayofobj[i].cls>>arrayofobj[i].s>>arrayofobj[i].id;
    }

    

  

    for(int i=0,j=n-1;i<n/2;i++,j--){

        char temp;

        if(i!=j){

             temp= arrayofobj[i].s;
             arrayofobj[i].s=arrayofobj[j].s;
             arrayofobj[j].s= temp;
           

        }


      

        
        
    }


        for(int i=0;i<n;i++){
        cout<<arrayofobj[i].nm<<" "<<arrayofobj[i].cls<<" "<<arrayofobj[i].s<<" "<<arrayofobj[i].id;
        cout<<endl;
    }

   

   

    return 0;
}
