#include<bits/stdc++.h>
using namespace std;
class A{
    ~A(){

    }
    public:
    int num=10;
    void deleteObj(){
        delete this;
    }
};
int main(){
    // A a;//error as the destructor is private
    A*obj=new A;
    // delete obj;//error as destructor is private
    cout<<obj->num<<endl;//10
    obj->deleteObj();
    cout<<obj->num<<endl;//garbage value, because obj no longer points to the object
    return 0;
}