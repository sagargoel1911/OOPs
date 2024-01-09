#include<bits/stdc++.h>
// #pragma pack (push, 1) //if we put this in code, the sixe of class will be sum of size of elements-> structure packing
using namespace std;
class Hero{

};
class Second{
    double d[2];
    int i;
    char a;
};
// The size of the class will always be the largest member, in case of array, the size of an individual element is taken, not of whole array
// the compiler introduces alignment requirements to every structure. It will be as that of the largest member of the structure. In our case alignment of structa_t is 2, structb_t is 4 and structc_t is 8. If we need nested structures, the size of the largest inner structure will be the alignment of an immediate larger structure.
// if the size of an element is s, it will start from multiples memory indices of multipoles of s only 
// known as Padding
// like if size is 4, it can reside from 0-3, or 4-7, or 8-11 etc,
// Greedy alignment is a technique used to minimize padding by ordering the data members of a class in decreasing order of size. This ensures that the largest data members are placed first in the class, minimizing the amount of padding required to align the subsequent data members.(ig increasing also works)
int main(){
    Hero h;
    Second s;
    cout<<sizeof(h)<<endl;
    cout<<sizeof(s)<<endl;
    return 0;
}