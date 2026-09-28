#include <iostream>
#include <string>
using namespace std;


class student {
protected:
    int stud_roll_no;
    string stud_name;
public:
    void getdata() {
        cout << "Enter student name: ";
        cin >> stud_name;
        cout << "Enter roll number: ";
        cin >> stud_roll_no;
    }
};


class student_marks : public student {
protected:
    float total_marks;
public:
    void getmarks() {
        getdata(); 
        cout << "Enter total marks (out of 500): ";
        cin >> total_marks;
    }
};


class student_result : public student_marks {
private:
    float percentage;
public:
    void display() {
        getmarks(); 
        percentage = (total_marks / 500.0) * 100;
        
        cout << "\n----- Student Result -----\n";
        cout << "Name: " << stud_name << endl;
        cout << "Roll No: " << stud_roll_no << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    student_result sr;
    sr.display();
    return 0;
}
