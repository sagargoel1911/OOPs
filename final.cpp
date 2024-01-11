#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    virtual void func(){
        cout<<"A";
    }
};
class B: public A{
    public:
    void func() final{ // only a virtual function can be final
        cout<<"B";
    }
};
// class C: public B{ 
//     public:
    // void func(){ // error as we are overriding a final function
//         cout<<"C";
//     }
// };
int main(){
    return 0;
}