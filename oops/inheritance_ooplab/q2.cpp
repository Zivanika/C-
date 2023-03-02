#include <iostream>
using namespace std;
class student{
    protected:
    string name;
    int rollno;
    int age;
    public:
    void inputdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter age: ";
        cin>>age;
    }
};
class Test:public student{
    int phy,chem,maths,eng,cs;
    public:
    void getdata()
    {
        cout<<"Enter the marks obtained in phyiscs: "<<endl;
        cin>>phy;
        cout<<"Enter the marks obtained in chemistry: "<<endl;
        cin>>chem;
        cout<<"Enter the marks obtained in maths: "<<endl;
        cin>>maths;
        cout<<"Enter the marks obtained in english: "<<endl;
        cin>>eng;
        cout<<"Enter the marks obtained in computer science: "<<endl;
        cin>>cs;
    }
    void display()
    {
        cout<<"Name: "<<name;
        cout<<"Roll no.: "<<rollno;
        cout<<"Age :"<<age;
        cout<<"Marks obtained :"<<endl;
        cout<<"Physics :"<<phy<<endl;
        cout<<"Chemistry :"<<chem<<endl;
        cout<<"Maths :"<<maths<<endl;
        cout<<"English :"<<eng<<endl;
        cout<<"Computer Science :"<<cs<<endl;

    }
};
int main (void)
{
Test aa;
aa.inputdata();
aa.getdata();
aa.display();
return 0;
}