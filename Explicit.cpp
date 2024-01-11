#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int num;
    A(int num){
        this->num=num;
    }
};
class B{
    public:
    int num;
    explicit B(int num){
        this->num=num;
    }
};
int main(){
    A a=10;// We just converted an int to A implicitly
    cout<<a.num<<endl;
    // B b=10; // error as this is what explicit does
    B b(10);
    cout<<b.num<<endl;
    return 0;
}