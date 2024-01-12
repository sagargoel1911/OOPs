#include<bits/stdc++.h>
using namespace std;
class A{
    int a=10;
    public:
    friend class B;
};
class B{
    public:
    void show(A obj){
        cout<<obj.a<<endl;
    }
};
int main(){
    A obj1;
    B obj2;
    obj2.show(obj1);//no error as B friend of A
    return 0;
}