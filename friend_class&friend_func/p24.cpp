#include <iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter a and b:"<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b;
    }
    friend mult(A);
};
mult(A a1)
{
    cout<<a1.a*a1.b;
}
int main (void)
{
A a1;
a1.getdata();
a1.display();
mult(a1);
return 0;
}