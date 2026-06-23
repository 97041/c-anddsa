#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
       string nm;
       int cls;
       char s;
       int id;
       int m_marks;
       int e_marks;

};

bool cmp(Student t, Student u){
   if(t.e_marks>u.e_marks){
    return true;
   }
   else if(t.e_marks==u.e_marks){
       if(t.m_marks>u.m_marks){
        return true;
         }
        else if(t.m_marks==u.m_marks){
           if(t.id<u.id){
            return true;
           }
           else{
            return false;
           }
           
    }
    else{
        return false;
    }
   }
   else{
    return false;
   }
 
}

int main()
{

    int n;
    cin>>n;

    Student arrayofobj[n];


     for(int i=0;i<n;i++){
        cin>>arrayofobj[i].nm>>arrayofobj[i].cls>>arrayofobj[i].s>>arrayofobj[i].id>>arrayofobj[i].m_marks>>arrayofobj[i].e_marks;
    }

    sort(arrayofobj,arrayofobj+n,cmp);

        for(int i=0;i<n;i++){
        cout<<arrayofobj[i].nm<<" "<<arrayofobj[i].cls<<" "<<arrayofobj[i].s<<" "<<arrayofobj[i].id<<" "<<arrayofobj[i].m_marks<<" "<<arrayofobj[i].e_marks;
        cout<<endl;
    }

   
    return 0;
}
