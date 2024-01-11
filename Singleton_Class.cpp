#include<bits/stdc++.h>
using namespace std;
class Singleton{
    static Singleton*instance;
    Singleton(){
        data=10;
    }// example of private constructor, needed whenever we need to control the formation of objects
    public:
    int data;
    static Singleton* getInstance(){
        if(!instance) instance=new Singleton;
        return instance;
    }
};
Singleton*Singleton::instance=nullptr;// has to be initialised here as any member which is not const cannot be initialised within the class
//initialised here even though private because static can
int main(){
    // Singleton s;// error as constructor is private
    // Singleton*s=new Singleton;//error as constructor is private
    Singleton*s1=Singleton::getInstance();
    cout<<s1->data<<endl;//10
    s1->data=15;
    cout<<s1->data<<endl;//15
    Singleton*s2=Singleton::getInstance();
    cout<<s2->data<<endl;//15 as s1 and s2 refer to the same instance, so our class only generates a single instance, so Singleton class
    return 0;
}