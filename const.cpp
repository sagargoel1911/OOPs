#include<bits/stdc++.h>
using namespace std;
// 4 cases of const
// 1. const variable
// 2. const object
// 3. const member function
// 4. const data member
class Human{
    public:
    int age;
    const int height;//4. const data member-> can be changed by constructor initialisation list or while declaration only
    Human(int age, int h=30):height(h){//only constructors take member initializers
        this->age=age;
    }
    // Human(int age, int h=30){
    //     this->height=h; //error
    //     this->age=age;
    // }
    void ageSetter(int age){
        this->age=age;
    }
    // void ageSetter2(int age) const{// 3. const member function, cannot change a data member value
    //     this->age=age;
    // } //error, a const function cannot change a data member value;
};
int main(){
    const int num=15;// 1. const variable-> value cannot be changed after declaration, has to be initialised during declaration
    cout<<num<<endl;
    // num=10;//error: assignment of read-only variable 'num'
    const Human Sagar(10);// 2. const object -> value of none of the data members can be changed after declaration
    cout<<Sagar.age<<endl;
    // Sagar.ageSetter(20); //error
    Human Aman(25,50);
    // Aman.ageSetter2(22);// 3. const member function, cannot change a data member value
    cout<<Aman.age<<endl;
    cout<<Aman.height<<endl;
    return 0;
}