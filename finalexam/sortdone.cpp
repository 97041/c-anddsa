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
  int totalmarksof_t= t.m_marks+t.e_marks;
  int totalmarksof_u= u.m_marks+u.e_marks;

  if(totalmarksof_t>totalmarksof_u){
    return true;
  }
  else if(totalmarksof_t==totalmarksof_u){
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
