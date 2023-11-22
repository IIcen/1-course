#include <iostream>
#include <math.h>

using namespace std;

class Triangle {
private:
    float a_;
    float b_;
    float c_;

public:
    // Конструктор для створення об'єкта Triangle
    Triangle(float a, float b, float c) {
        a_ = a;
        b_ = b;
        c_ = c;
    }

    //Введення даних
    void Add() {

        float a;
        float b;
        float c;

        cout << "Enter a ";
        cin >>a;

        if (a > 0) {
            a_ = a;
        }
        else
        {
            cout << "Incorrect";
            exit(0);
        }

        cout << "Enter b ";
        cin >> b;

        if (b > 0) {
            b_ = b;
        }
        else
        {
            cout << "Incorrect";
            exit(0);
        }

        cout << "Enter c ";
        cin >> c;

        if (c > 0) {
            c_ = c;
        }
        else
        {
            cout << "Incorrect";
            exit(0);
        }
    }

    //Виведення даних
    void Print() {
        cout << "a: " << a_ << endl << "b: " << b_ << endl << "c: " << c_ << endl;
    }

    //Знаходження площі трикутника
    void TrS() {
        float s, p;

        p = (a_ + b_ + c_) / 2;

        s = sqrt(p * (p - a_) * (p - b_) * (p - c_));

        cout << "Triangle S: " << s << endl;
    }

    //Знаходження периметру трикутник
    void TrP() {
        float p;

        p = a_ + b_ + c_;

        cout << "Triangle P: " << p << endl;
    }
};

int main() {
    float a = 0, b = 0, c = 0;

    Triangle triangle(a, b, c);

    triangle.Add();
    triangle.TrP();
    triangle.TrS();
    triangle.Print();
}