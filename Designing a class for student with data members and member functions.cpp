#include <iostream>

using namespace std;

class Student{
private:
    int rollNo;
    string name;
    float marks;
public:
    void Input(){
    cout << "Enter Roll Number: " << endl;
    cin >> rollNo;
    cout << "Enter Name: " << endl;
    cin >> name;
    cout << "Enter Marks: " << endl;
    cin >> marks;
    }
    void Display(){
    cout << "Student Details:" << endl;
    cout << "Roll No:" << rollNo << endl;
    cout << "Marks:" << marks << endl;

    if (marks > 90){
        cout<<"Result : Distinction";
    }
    else if (marks > 80){
        cout<<"Result : First Class";
    }
    else if (marks > 70){
        cout<<"Result : Second Class";
    }
    else if (marks > 60){
        cout<<"Result : Pass";
    }
    else{
        cout<<"Result : Fail";
    }
    }
};

int main()
{
    Student a;
    a.Input();
    a.Display();
    return 0;
}
