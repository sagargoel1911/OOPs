#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a=10;
};
class B:  public A{
    public:
    int a=20;
    int b=30;
};
int main(){
    B obj1;
    A obj2(obj1);
    cout<<obj2.a<<" "<<obj1.a<<endl;// Although obj2 is initialised using obj1, the value of A is still there
    // cout<<obj2.b;// error as b has been sliced
    B* d_Obj1=new B;
    A* d_Obj2=d_Obj1;
    cout<<d_Obj2->a<<" "<<d_Obj1->a<<endl;// No matter static or dynamic, the Base class value is inherited
    // cout<<d_Obj2->b;// error
    //That is why we need virtual functions. As otherwise we wouldn't be able to call functions of Inhertited class from an object of base class
    return 0;
}