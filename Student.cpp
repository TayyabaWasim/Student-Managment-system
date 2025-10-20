#include "Student.h"

// --- Setter Methods (Encapsulation) ---
// --- Setting Value for Private Member ---

void Student::setName(string n) {
    name = n;
}

void Student::setRoll(string r) {
    roll = r;
}

void Student::setAge(int a) {
    age = a;
}

void Student::setGpa(float g) {
    gpa = g;
}

// --- Default Constructor ---

Student::Student() {
    setName("Unknown");
    setRoll("Unknown");
    setAge(0);
    setGpa(0.0);
}

// --- Parameterized Constructor  ---

Student::Student(string n, string r, int a, float g) {
    setName(n);
    setRoll(r);
    setAge(a);
    setGpa(g);
}

// --- Destructor ---

Student::~Student() {
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "All the Records are deleted for this Roll Number : " << roll << endl;
}

// --- Grade Calculator ---

void Student::gradeCalculate() {
    if (gpa >= 3.5 && gpa <= 4.0) {
        grade = "A";
    }
    else if (gpa >= 3.0) {
        grade = "B";
    }
    else if (gpa >= 2.7) {
        grade = "B-";
    }
    else if (gpa >= 2.5) {
        grade = "C";
    }
    else if (gpa >= 2.3) {
        grade = "C-";
    }
    else if (gpa >= 2.0) {
        grade = "D";
    }
    else {
        grade = "F";
    }

}

// --- Display Student Information ---

void Student::display() {
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "Name: " << name << "\t| Roll Num : " << roll << "\t|Age: " << age << "\t| GPA : " << gpa
        << "\t| Grade : " << grade << endl;
}