#include<bits/stdc++.h>
using namespace std;

// in many cases, is a can be replaced by a has - a relationship


//Difference between aggregation and composition, in aggregation, when the parent is deleted, the child is not necessarily deleted too.
class Legs {
    public:
    void hasLegs(string s){
        cout<<s<<" has legs"<<endl;
    }
};

class Arms {
    public:
    void hasArms(string s){
        cout<<s<<" has arms"<<endl;
    }
};

class Robot {
    Legs *legs;
    Arms *arms;
    public:
    Robot(Legs*legs,Arms*arms){
        this->legs = legs;
        this->arms = arms;
    }
    void walk () {legs->hasLegs("Robot");}
    void grab () {arms->hasArms("Robot");}
    ~Robot(){
        delete legs;
        delete arms;
    }
};

int main(){
    Legs* legs = new Legs();
    Arms* arms = new Arms();
    Robot r(legs,arms);
    r.walk();
    r.grab();
    return 0;
}