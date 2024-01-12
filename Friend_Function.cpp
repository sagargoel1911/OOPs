#include<bits/stdc++.h>
using namespace std;
class A{
    int b;
    public:
    A(int num):b(num){

    }
    friend void frfunc(A a);//It is an outer function which has got permission to get access to the private members of the class
};
void frfunc(A a){
    cout<<a.b<<endl;
}
int main(){
    A a(10);
    frfunc(a);
    return 0;
}