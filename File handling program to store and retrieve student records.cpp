#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[50];
    float marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Student s;
    int choice;

    do {
        cout << "\nStudent Record System" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            ofstream fout("student.dat", ios::binary | ios::app);
            s.input();
            fout.write((char*)&s, sizeof(s));
            fout.close();
            cout << "Record Added Successfully!" << endl;
            break;
        }

        case 2: {
            ifstream fin("student.dat", ios::binary);
            while (fin.read((char*)&s, sizeof(s))) {
                s.display();
            }
            fin.close();
            break;
        }

        case 3: {
            int r, found = 0;
            cout << "Enter Roll No to search: ";
            cin >> r;

            ifstream fin("student.dat", ios::binary);
            while (fin.read((char*)&s, sizeof(s))) {
                if (s.roll == r) {
                    cout << "Record Found:" << endl;
                    s.display();
                    found = 1;
                    break;
                }
            }
            fin.close();

            if (!found)
                cout << "Record Not Found!" << endl;

            break;
        }

        case 4:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
