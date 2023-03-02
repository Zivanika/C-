#include <iostream>
using namespace std;
class A{
    int a,b;
    public:
    A()
    {
     a=b=0;
    }
    A(int c,int d)
    {
     a=c;
     b=d;
    }
    void display(){
       cout<<"The no. for this object is :"<<a<<"  "<<b<<endl;
    }
    A(A &obj)
    {
        a=obj.a;
        b=obj.b;
    }
};
int main (void)
{
A bb;
A aa(34,99);
A cc=aa;
aa.display();
cc.display();
return 0;
}