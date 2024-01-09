#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a=10;
    void operator + (A obj){
        cout<<this->a+obj.a<<endl;
    }
};
int main(){
    A fir,sec;
    fir+sec;
    return 0;
}