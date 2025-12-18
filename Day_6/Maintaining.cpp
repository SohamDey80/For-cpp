#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    int age;

    void insertData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person {
public:
    int roll;

    void insertData() {
        cout << "--- Enter Student Details ---" << endl;
        Person::insertData();
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void displayData() {
        cout << "--- Student Details ---" << endl;
        Person::displayData();
        cout << "Roll Number: " << roll << endl;
    }
};

class Faculty : public Person {
public:
    string department;

    void insertData() {
        cout << "--- Enter Faculty Details ---" << endl;
        Person::insertData();
        cout << "Enter department: ";
        cin >> department;
    }

    void displayData() {
        cout << "--- Faculty Details ---" << endl;
        Person::displayData();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s;
    Faculty f;

    s.insertData();
    f.insertData();

    cout << endl;
    s.displayData();
    f.displayData();

    return 0;
}
