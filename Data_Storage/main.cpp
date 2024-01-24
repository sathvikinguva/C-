#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

struct Student {
    int sn;
    string regn;
    string name;
    string loc;
    float cgpa;
};

void retrieveByCGPA(float result) {
    ifstream in_file("../students.txt");
    if (!in_file) {
        cerr << "Error opening file." << endl;
        exit(EXIT_FAILURE);
    }

    Student student;
    string line;

    cout << "Students with CGPA greater than " << result << ":\n";
    while (getline(in_file, line)) {
        istringstream iss(line);
        if (iss >> student.sn >> student.regn >> student.name >> student.loc >> student.cgpa) {
            cout << "Read: " << student.sn << " " << student.regn << " " << student.name << " " << student.loc << " " << student.cgpa << endl;
            if (student.cgpa > result) {
                cout << "Registration Number: " << student.regn << " Name: " << student.name << endl;
            }
        } else {
            cerr << "Error reading line: " << line << endl;
        }
    }

    in_file.close();
}

void retrieveByLocation(const string &state) {
    ifstream in_file("../students.txt");
    if (!in_file) {
        cerr << "Error opening file." << endl;
        exit(EXIT_FAILURE);
    }

    Student student;
    string line;

    cout << "\nStudents belonging to " << state << ":\n";
    while (getline(in_file, line)) {
        istringstream iss(line);
        if (iss >> student.sn >> student.regn >> student.name >> student.loc >> student.cgpa) {
            cout << "Read: " << student.sn << " " << student.regn << " " << student.name << " " << student.loc << " " << student.cgpa << endl;
            if (student.loc == state) {
                cout << "Registration Number: " << student.regn << endl;
            }
        } else {
            cerr << "Error reading line: " << line << endl;
        }
    }

    in_file.close();
}

int main() {
    float cgpaResult = 8.5;
    retrieveByCGPA(cgpaResult);

    string andhraPradesh = "Andhra Pradesh";
    retrieveByLocation(andhraPradesh);

    return 0;
}
