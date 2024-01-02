#include <bits/stdc++.h>

using namespace std;

class Person {
public:
    string* name;
    int age;

    Person(string name, int age) {
        this->name = new string(name);
        this->age = age;
    }

    // Deep copy constructor
    Person(const Person &p) {
        name = new string(*p.name);
        age = p.age;
    }

    ~Person() {
        delete name;
    }

    void print() {
        cout << *name << ", " << age << endl;
    }
};

void mainFn() {
    string name;
    int age;

    cin >> name >> age;

    Person original(name, age);
    Person copy = original;

    cout << "Original: ";
    original.print();
    cout << "Copy: ";
    copy.print();
}
