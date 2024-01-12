#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
};
class B: virtual public A{
    public:
    int b;
};
class C: virtual public A{
    public:
    int c;
};
class D: public B, public C{
    public:
    int d;
};
int main(){
    D d;
    d.a=0;// error D::a is ambiguous if virtual is not there
    return 0;
}