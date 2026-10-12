#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string fullName;
    string birthDate;
    string phone;
    string city;
    string country;
    string university;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    // Введення даних
    void input() {
        cout << "ПІБ: ";
        getline(cin, fullName);
        cout << "Дата народження: ";
        getline(cin, birthDate);
        cout << "Телефон: ";
        getline(cin, phone);
        cout << "Місто: ";
        getline(cin, city);
        cout << "Країна: ";
        getline(cin, country);
        cout << "Навчальний заклад: ";
        getline(cin, university);
        cout << "Місто навчального закладу: ";
        getline(cin, universityCity);
        cout << "Країна навчального закладу: ";
        getline(cin, universityCountry);
        cout << "Номер групи: ";
        getline(cin, groupNumber);
    }

    // Виведення даних
    void print() const {
        cout << "=== Інформація про студента ===\n";
        cout << "ПІБ: " << fullName << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Місто: " << city << ", Країна: " << country << endl;
        cout << "Навчальний заклад: " << university
            << " (" << universityCity << ", " << universityCountry << ")" << endl;
        cout << "Група: " << groupNumber << endl;
    }

    // Аксесор (getter)
    string getFullName() const { return fullName; }
    string getGroupNumber() const { return groupNumber; }
};

int main() {
    Student s;
    s.input();
    s.print();
    cout << "Аксесор: ім'я студента = " << s.getFullName() << endl;
    return 0;
}
