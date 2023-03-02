#include <iostream>
using namespace std;
class time{
    int h;
    int m;
    public:
    time()
    {
        h=1;
        m=9;
    }
    time(int a,int b)   
    {
      h=a;
      m=b;
    }
    time(time &t)
    {
        h=t.h;
        m=t.m;
    }
    
    void putdata()
    {
        cout<<"\n"<<h<<":"<<m;
    }
};

int main (void)
{
time aa; 
aa.putdata();
time bb(8,9);
bb.putdata();
time cc(bb);
cc.putdata();
return 0;
}