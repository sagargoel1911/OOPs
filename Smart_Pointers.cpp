#include<bits/stdc++.h>
using namespace std;
class SP{
    int*p;
    public:
    SP(int* ptr): p(ptr){
        cout<<"Constructor"<<endl;
    }
    ~SP(){
        cout<<"Destructor"<<endl;
        delete p;
    }
    int& operator *(){
        return *(this->p);
    }
};
int main(){
    SP sp(new int(20));
    cout<<*sp<<endl;
    *sp=30;
    cout<<*sp<<endl;
    //user doesn't need to add delete statement
    return 0;
}