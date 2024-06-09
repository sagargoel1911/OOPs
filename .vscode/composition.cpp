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
// in many cases, is a can be replaced by a has - a relationship
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
    Legs legs;
    Arms arms;
    public:
    void walk () {legs.hasLegs("Robot");}
    void grab () {arms.hasArms("Robot");}
};

int main(){
    Robot r;
    r.walk();
    r.grab();
    return 0;
}