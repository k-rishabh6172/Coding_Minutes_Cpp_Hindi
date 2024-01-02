#include <bits/stdc++.h>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    Complex operator - (Complex const &obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    Complex operator * (Complex const &obj) {
        return Complex(real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real);
    }

    void print() {
        cout << real << " ";
        if(imag >= 0){
            cout << "+ ";
        }else{
            cout << "- ";
        }
        cout << abs(imag) << "i" << endl;
    }
};

int mainFn() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    Complex num1(a, b), num2(c, d);

    Complex sum = num1 + num2;
    Complex difference = num1 - num2;
    Complex product = num1 * num2;

    sum.print();
    difference.print();
    product.print();

    return 0;
}
