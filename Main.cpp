#include "Student.h"

    // --- Main Function ---

int main() {
    cout << "=== Student Information System ===" << endl;

    // --- Default constructor ---

    Student s1;
    s1.gradeCalculate();
    s1.display();

    // --- Setters called in Main ---

    s1.setName("Javeria");
    s1.setRoll("L1F24BSSC01");
    s1.setAge(27);
    s1.setGpa(2.5);
    s1.gradeCalculate();
    s1.display();

    // --- Parameterized Constructors with 4 Arguments---

    Student s2("Raza", "L1FBS24CS102", 21, 2.0);
    s2.gradeCalculate();
    s2.display();

    // --- Parameterized Constructors with 3 arguments---

    Student s3("Aiza", "L1FBS30DSBS03", 29);
    s3.setGpa(2.7);
    s3.gradeCalculate();
    s3.display();

    // --- Another Simple Object Creation Example ---

    Student s4("Abbas", "L1F24BS04", 18, 3.3);
    s4.gradeCalculate();
    s4.display();
    cout << endl;
    return 0;
}