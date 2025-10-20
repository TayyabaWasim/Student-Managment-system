#pragma once
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    string roll;
    int age;
    float gpa;
    string grade;
public:
    Student();
    Student(string n, string r, int a, float g = 0.0);
    ~Student();
    void gradeCalculate();
    void display();
    void setName(string n);
    void setRoll(string r);
    void setAge(int a);
    void setGpa(float g);
};