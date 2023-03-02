#include <iostream>
using namespace std;
class COMPLEX{
    int r1,i1,r2,i2;
    public:
    void getdata()
    {
        cout<<"USING FRIEND FUNCTION: "<<endl;
        cout<<"Enter the real and imaginary part of 1st complex number: "<<endl;
        cin>>r1>>i1;
        cout<<"Enter the real and imaginary part of 2nd complex number: "<<endl;
        cin>>r2>>i2;
    }
    friend int addcomplex(COMPLEX);
};
int addcomplex(COMPLEX aa)
{
  cout<<"The addition of two complex numbers is: "<<aa.r1+aa.r2<<"+i"<<aa.i1+aa.i2<<endl;
  return 0;
}
int main (void)
{

COMPLEX aa;
aa.getdata();
addcomplex(aa);
return 0;
}