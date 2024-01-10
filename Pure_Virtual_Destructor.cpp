#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual ~Base()=0;
};
// Base::~Base(){

// } // If this is not there then error in code
// A pure virtual function should have a function body as it is always called whenever an object of Inherited class' destructor is called, and a function that is called should always have a body
class Inherited: public Base{

};
int main(){
    Inherited I;
    return 0;
}