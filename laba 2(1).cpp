#include <iostream>

using namespace std;

class TDate {
private:
    int day;
    int month;
    int year;

public:
    // Конструктор для створення об'єкта TDate
    TDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    
    //Введення даних
    void Add() {

        int d;
        int m;
        int y;

        cout << "Enter year ";
        cin >> y;

        if (y > 0) {
            year = y;
        }
        else
        {
            cout << "Incorrect";
            exit(0);
        }

        cout << "Enter month ";
        cin >> m;

        if (0 < m && m <= 12) {
            month = m;
        }
        else
        {
            cout << "Incorrect";
            exit(0);
        }

        cout << "Enter day ";
        cin >> d;

        if (0 < d && d <= 30) {
            day = d;
        }
        else
        {
            cout << "Incorrect";
            exit(0);
        }
    }

    //Виведення даних
    void ToString() {
        cout << day << "." << month << "." << year << endl;
    }

    //Додавання днів
    void PlusD(int d) {
        int dd = day;
        int mm = month;

        if (d < 1) {
            cout << "Incorrect";
            exit(0);
        }

        dd += d;

        if (dd <= 30) {
            day = dd;
        }
        else if (dd > 30) {
            day = dd % 30;
            mm += dd / 30;
        }

        if (mm > 12) {
            month = mm % 12;
            year += mm / 12;
        }
        else if (mm <=12)
        {
            month = mm;
        }

    }

    //Віднімання днів
    void MinusD(int d) {
        int dd = day;
        int mm = month;

        if (d < 1) {
            cout << "Incorrect";
            exit(0);
        }

        dd -= d;

        if (dd > 0 && dd <= 30) {
            day = dd;
        }
        else if (dd < 1) {
            mm -= ((d - day) / 30) + 1;
            day = 30 - ((d - day) % 30);

            //month = mm;
        }
        
        if (mm < 0 && mm >= -12) {
            year -= ((abs(mm) - month) / 12) + 1;
            month = 12 - abs(mm);
        }
        else if (mm > 0)
        {
            month = mm;
        }
        else if (mm == 0)
        {
            year--;
            month = 12;
        }
        else
        {
            year -= ((abs(mm) - month) / 12) + 1;
            month = abs(mm + 2) % 12;
        }
    }

    //Додавання місяців
    void PlusM(int m) {
        int mm = month;

        if (m < 1) {
            cout << "Incorrect";
            exit(0);
        }

        mm += m;

        if (mm > 12) {
            month = mm % 12;
            year += mm / 12;
        }
        else if (mm <= 12)
        {
            month = mm;
        }
    }

    //Віднімання місяців
    void MinusM(int m) {
        int mm = month;

        if (m < 1) {
            cout << "Incorrect";
            exit(0);
        }

        mm -= m;

        if (mm < 0 && mm >= -12) {
            year -= ((abs(mm) - month) / 12) + 1;
            month = 12 - abs(mm);
        }
        else if (mm > 0)
        {
            month = mm;
        }
        else if (mm == 0)
        {
            year--;
            month = 12;
        }
        else
        {
            year -= ((abs(mm) - month) / 12) + 1;
            month = abs(mm + 2) % 12;
        }
    }

    //Додавання років
    void PlusY(int y) {
        if (y < 1) {
            cout << "Incorrect";
            exit(0);
        }

        year += y;
    }

    //Додавання років
    void MinusY(int y) {
        if (y < 1) {
            cout << "Incorrect";
            exit(0);
        }

        year -= y;
    }

};

int main() {
    int y = 0;
    int m = 0;
    int d = 0;

    TDate Date(y, m, d);

    Date.Add();
    cout << "Enter data" << endl;
    Date.ToString();
    cout << "Plus 23 day" << endl;
    Date.PlusD(23);
    Date.ToString();
    cout << "Minus 36 day" << endl;
    Date.MinusD(36);
    Date.ToString();
    cout << "Plus 3 month" << endl;
    Date.PlusM(3);
    Date.ToString();
    cout << "Minus 16 month" << endl;
    Date.MinusM(16);
    Date.ToString();
    cout << "Plus 15 year" << endl;
    Date.PlusY(15);
    Date.ToString();
    cout << "Minus 40 year" << endl;
    Date.MinusY(40);
    Date.ToString();
}


