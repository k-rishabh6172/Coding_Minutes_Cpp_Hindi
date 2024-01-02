#include <bits/stdc++.h>

using namespace std;

class Animal {
public:
    string name;

    Animal(string name): name(name) {}

    void getName() {
        cout << name << ": ";
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}

    virtual void bark() {
        cout << "Woof Woof" << endl;
    }
};

class GoldenRetriever : public Dog {
public:
    GoldenRetriever(string name) : Dog(name) {}

    void bark() override {
        cout << "Woof, I am a Golden Retriever" << endl;
    }
};

void mainFn() {
    Dog d("Dog");
    d.getName();
    d.bark();

    GoldenRetriever g("Golden");
    g.getName();
    g.bark();
}
