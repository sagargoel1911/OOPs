#include<bits/stdc++.h>
using namespace std;
class Base1{
    public:
    Base1(){
        cout<<"Base 1 constructor"<<endl;
    }
    ~Base1(){
        cout<<"Base 1 destructor"<<endl;
    }
};
class Base2{
    public:
    Base2(){
        cout<<"Base 2 constructor"<<endl;
    }
    virtual ~Base2(){
        cout<<"Base 2 destructor"<<endl;
    }
};
class Inherited1:  public Base1{
    public:
    Inherited1(){
        cout<<"Inherited 1 constructor"<<endl;
    }
    ~Inherited1(){
        cout<<"Inherited 1 destructor"<<endl;
    }
};
class Inherited2:  public Base2{
    public:
    Inherited2(){
        cout<<"Inherited 2 constructor"<<endl;
    }
    ~Inherited2(){
        cout<<"Inherited 2 destructor"<<endl;
    }
};
int main(){
    Base1*b1 = new Inherited1();
    delete b1;// only Base1 destructor
    Base2*b2 = new Inherited2();
    delete b2;// both Inherited2 and Base2 destructed
    return 0;
    // NOTE VIRTUAL CONSTRUCTORS ARE NOT ALLOWED
}