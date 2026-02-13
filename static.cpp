#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    string section;
    double math_mark;
    int cls;
    Student(string name,int roll,string section,double math_mark,int cls){
        this->name=name;
        this->roll=roll;
        this->section=section;
        this->math_mark=math_mark;
        this->cls=cls;
    }   
};
int main()
{
    Student a("Rahim",29,"A",95.99,10);
    Student b("Karim",55,"B",81.99,9);
    Student c("Rahim",29,"A",95.99,10);
    if(a.math_mark>b.math_mark && a.math_mark>c.math_mark){
        cout<<a.name<<endl;
    }
    else if(b.math_mark>a.math_mark && b.math_mark>c.math_mark){
        cout<<b.name<<endl;
    }else{
        cout<<c.name<<endl;
    }
    return 0;
}