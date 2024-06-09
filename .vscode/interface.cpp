#include<bits/stdc++.h>
using namespace std;

//There is no implementation of interface in cpp, but we can make our own
//An "Interface" is equivalent to a pure abstract class in C++.
//Ideally this interface class should contain only pure virtual public methods and static const data members. 

struct MyInterface
{
  static const int X = 10;

  virtual void Foo() = 0;
  virtual int Get() const = 0;
  virtual inline ~MyInterface() = 0;
};
MyInterface::~MyInterface () {}

int main(){
    return 0;
}