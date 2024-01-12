#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        // throw(0);  // int 0
        // throw('c');  // other
        // throw("s");  // other
        // throw(2.4);  // double 2.4
        // throw(nullptr);  // other
    }
    catch(int x){
        cout<<"int "<<x<<endl;
    }
    catch(double x){
        cout<<"double "<<x<<endl;
    }
    catch(...){
        cout<<"other "<<endl;
    }
    // catch(exception &exec){
    //     cerr<<exec.what()<<endl;
    // }// if we want to print something about other exceptions
    return 0;
}