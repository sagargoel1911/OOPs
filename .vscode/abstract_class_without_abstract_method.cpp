#include<bits/stdc++.h>
using namespace std;

//You can declare your destructor as pure virtual, since all classes have one.

class AbstractClass
{
public:
    virtual ~AbstractClass() = 0 ;
} ;
//However, you will need to define this destructor elsewhere.

AbstractClass::~AbstractClass() {}

int main(){
    return 0;
}