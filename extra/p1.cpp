#include <iostream>
#include <string>  
using namespace std;  
class Animal{
public:
    string name;
    string breed;
    int age;
    string food_type;
//    private:
    string sound;
    public:
    Animal(){
        name="cat";
        breed ="persian";
        age =0;
        food_type="milk";
        sound="meow";
        cout<<"constructor is called"<<endl;
    }

    ~Animal(){
        cout<<"destructor is called"<<endl;
    }
    // private:
    void show_data(){
        cout<<name <<endl;
        cout<<breed <<endl;
        cout<<age <<endl;
        cout<<sound <<endl;
        cout<<food_type <<endl;
    }

};

int main(){
    Animal a1;
    a1.name="parrot";
    a1.breed="maccaw";
    a1.age=2;
    a1.sound="mithu ";
    a1.food_type="bread";
    a1.show_data();
    return 0;
}