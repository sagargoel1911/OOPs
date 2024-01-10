#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    static int population;//declare a static variable
    int age=0;
    static void populationSquared(){
        // cout<<population*age<<endl;//error->static functions cannot use non static members
        cout<<population*population<<endl;
        // cout<<this->population;//error-> this cannot be used in a static member function
    }
    void showPop(){
        cout<<this->population<<endl;//this is valid, but not recommended, as a static member belongs to the class, not an object
        population++;
    }

};
int Human::population=5;//initialise a static variable// even private static members can be INITIALISED like this, rest static members work with access modifiers as others do
int main(){
    Human Sagar;
    Sagar.showPop();
    cout<<Human::population<<endl;//use a static variable
    Human::populationSquared();
    //a static member/function can be used by an object too but not advisable as a static member belongs to a class, not a specific object
    return 0;
}