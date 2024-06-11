#include<bits/stdc++.h>
using namespace std;

// inheritance can result in complex tree structures and bad code, specially in languages like Java/Kotlin, where
// multiple inheritance is not allowed.
// Also, if you implement the Liskov Substitution principle, you can see the complex inheritance trees.
// So, some people advocate for composition instead of inheritance
// Here, we can just take all the functions that can be needed and make different classes of it.
// Whatever functions are needed in a class, we take it in our object

// There is another mechanism that is less radical than replacing all the inheritance code with composition is
// that whenever there is a has a relationship, use composition, whenever there is an is a relationship, use inhertance
// in many cases, is a can be replaced by a part - of relationship


//Difference between aggregation and composition, in composition, when the parent is deleted, the child is deleted too.
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
    Robot(){
        legs = new Legs();
        arms = new Arms();
    }
    void walk () {legs->hasLegs("Robot");}
    void grab () {arms->hasArms("Robot");}
    ~Robot(){
        delete legs;
        delete arms;
    }
};

int main(){
    Robot r;
    r.walk();
    r.grab();
    return 0;
}