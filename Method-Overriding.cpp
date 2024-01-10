#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    virtual void func(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"B"<<endl;
    }
};
class D{
    public:
    virtual void func()=0;
};
void D::func(){
    cout<<"D"<<endl;
}//in some circumstances, the pure virtual function maybe called, so
class C: public A, public B, public D{
    public:
    void func(){
        cout<<"C"<<endl;
    }
};
int main(){
    //if an object of an inherited class is made and the function is called, then the function of inherited class will only be called, the doubt arises when a function of base class is called
    C*c=new C;
    A a1=*c;
    a1.func(); // A-> a base class defined statically defined, it will always run its own function, no matter what
    A*a2=c;
    a2->func();// C-> since dynamically defined and virtual function
    a2->A::func();// A
    B*b1=c;
    b1->func();// B-> since the function is not virtual function
    // D d;// error-> as an object of abstract class cannot be made
    D*d=new C; // the pointer of D can be made and initialised with a value of C;
    d->func();
    d->D::func();// the only use of having a body for pure virtual function // if body not defined, undefined refernce can come here
    return 0;
}