#include <iostream>
using namespace std;

//Single Inheritance
// Base Class
class Vehicle {
public:
    void show(){
    cout<<"This is a vehicle" << endl;
    }
};

// Derived Class
class Car : public Vehicle {
public:
    void display() {
        cout <<"This is a car" << endl;
    }
};

int main()
{
    Car c;
    c.show();
    c.display();
    return 0;
}
