#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int*num=new int(10);
    A(){

    }
    A(A &a){
        cout<<"Copy Constructor"<<endl;
    }
    //default copy constructor does shallow copy
};
int main(){
    A b;
    A c(b);//copy constructor called
    A d=b;//copy constructor called
    A e;
    e=d;//copy construcor NOT called
    A*f=new A(b);//copy constructor called
    return 0;
}