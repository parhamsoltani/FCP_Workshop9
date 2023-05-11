#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string lastname;
    string phone;
    string zip;
private:
    int grade;
public:
    Student(string n, string a, string p, string z, int g) {
        name = n;
        lastname = a;
        phone = p;
        zip = z;
        grade = g;
    }
    void retest(int new_grade) {
        grade = new_grade;
    }

    void getGrade() {
        cout << grade; 
    }
    void display() {
        cout << "Student Name : " << " " << name << " " << lastname << endl;
        cout << "Student Phone Number : " << " " << phone << endl;
        cout << "Student Zip Code : " << " " << zip << endl;
        cout << "Student Test Score : " << " " << grade << endl;
    }
};

int main() {
    string name,lastname,  phone, zip;
    int grade;
    cin >> name >> lastname >> phone >> zip;
    cin >> grade;
    Student s(name, lastname, phone, zip, grade);

    //s.display();
    int new_grade;
    cin >> new_grade;

    s.retest(new_grade);
    s.display();
    
    return 0;
}