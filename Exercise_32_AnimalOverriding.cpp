#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Generic Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof Woof" << endl;
    }
};

void mainFn() {
    Animal* a = new Animal();
    a->makeSound();

    Animal* d = new Dog();
    d->makeSound();

    delete a;
    delete d;
}
