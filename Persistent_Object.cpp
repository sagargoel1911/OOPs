#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void save(string filename){
        ofstream file(filename);
        file<<name<<"\n"<<age<<"\n";
    }
    void load(string filename){
        ifstream file(filename);
        getline(file,name);
        file>>age;
    }
};
int main(){
    Person p1,p2;
    p1.name="Sagar";
    p1.age=22;
    p1.save("person.txt");
    p2.load("person.txt");
    cout<<p2.name<<" "<<p2.age<<endl;
    return 0;
}