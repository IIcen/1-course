#include <iostream>
#include <math.h>

using namespace std;

class TTriangle {
private:
    float a_;
    float b_;
    float c_;

public:
    //Конструктор без параметрів
    TTriangle() {
        a_ = 1;
        b_ = 1;
        c_ = 1;
    }

    // Конструктор з параметрами
    TTriangle(float a, float b, float c) {
        a_ = a;
        b_ = b;
        c_ = c;
    }

    TTriangle(const TTriangle& q) {
        a_ = q.a_;
        b_ = q.b_;
        c_ = q.c_;
    }

    //Введення даних
    void Add() {

        float a;
        float b;
        float c;

        cout << "Enter a ";
        cin >> a;

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
    float TrS() {
        float s, p;

        p = (a_ + b_ + c_) / 2;

        s = sqrt(p * (p - a_) * (p - b_) * (p - c_));

        return s;
    }

    //Знаходження периметру трикутник
    float TrP() {
        float p;

        p = a_ + b_ + c_;

        return p;
    }
};

int main() {

    TTriangle triangle1;

    triangle1.Add();
    cout << "Triangle P: " << triangle1.TrP() << endl;
    cout << "Triangle S: " << triangle1.TrS() << endl;
    triangle1.Print();
}