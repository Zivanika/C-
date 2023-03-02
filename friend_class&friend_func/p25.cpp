#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter a :";
        cin>>a;
    }
    friend max(A,B);
};
class B{
    int b;
    public:
    void get()
    {
        cout<<"Enter b:"
    }
}
int main (void)
{
return 0;
}