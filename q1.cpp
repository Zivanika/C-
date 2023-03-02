#include <iostream>
#include <string.h>
using namespace std;
class Number{
    int a,b,length;
    char *str;
    public:
    Number(){
        cout<<"Default Constructor"<<endl;
        a=b=0;
        
    }

    Number(int c,int d){
        cout<<"Parameterized constructor"<<endl;
        a=c;
        b=d;
    }
    Number(Number &obj){
        cout<<"Copy Constructor"<<endl;
        a=obj.a;   
        b=obj.b;
    }
    Number(char *p)
    {
    cout<<"Dynamic Constructor"<<endl;
    //  length=0;
    //  str=new char[length+1];
     length=strlen(p);
     cout<<"Length: "<<length;
     str=new char[length+1];
     strcpy(str,p);
        cout<<"\nThe string is: "<<str;
    }
    void display()
    {
        cout<<"a and b :"<<a<<" "<<b<<endl;
    }
//     void output(Number ee)
//     {
//         cout<<"Program reached here\n";
//         length=ee.length;
//         str=new char[
// length+1];
//         strcpy(str,ee.str);
//         cout<<"The string is: "<<str;
//     }
};
int main (void)
{
Number aa;
aa.display();
Number bb(89,90);
bb.display();
Number cc=bb;
cc.display();
Number dd("Hi!");
// dd.output(dd);


return 0;
}