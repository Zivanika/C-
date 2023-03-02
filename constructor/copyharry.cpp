#include <iostream>
using namespace std;
class Number{
    int a;
    public:
    Number()
    {
        a=0;
    }
    Number(int num)
    {
        a=num;
    }
    Number(Number &obj)
    {
        cout<<"Copy Constructor"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"The number for this object is :"<<a<<endl;
    }
};
int main (void)
{
Number x,y,z(45);
x.display();
y.display();
z.display();
return 0;
}