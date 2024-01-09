#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"A";
    }
};
class B{
    public:
    void fun(){
        cout<<"B";
    }
};
class C: public A, public B{
    // public:
    // void fun(){
    //     cout<<"C";
    // }// if this is there then even c.fun(); works, and outputs C
};
int main(){
    C c;
    c.A::fun();
    return 0;
}