#include <iostream>
#include <string>

using namespace std;

// Base class representing a subject
class Subject {
public:
    string className;
    string teacher;
    string *students;
    int numStudents;

    // Constructor for the Subject class
    Subject(string className, string teacher, string students[], int numStudents) {
        this->className = className;
        this->teacher = teacher;
        this->numStudents = numStudents;
        this->students = new string[numStudents];

        // Copy the student names into the students array
        for (int i = 0; i < numStudents; i++) {
            this->students[i] = students[i];
        }
    }

    // Destructor to free dynamically allocated memory
    ~Subject() {
        delete[] students;
    }
};

// Subclasses representing specific subjects
class Science : public Subject {
public:
    Science(string className, string teacher, string students[], int numStudents)
        : Subject(className, teacher, students, numStudents) {}
};

class Art : public Subject {
public:
    Art(string className, string teacher, string students[], int numStudents)
        : Subject(className, teacher, students, numStudents) {}
};

class Math : public Subject {
public:
    Math(string className, string teacher, string students[], int numStudents)
        : Subject(className, teacher, students, numStudents) {}
};

class History : public Subject {
public:
    History(string className, string teacher, string students[], int numStudents)
        : Subject(className, teacher, students, numStudents) {}
};

int main() {
    string studentNames[] = {"Alice", "Bob", "Charlie", "David", "Eve"};

    // Create instances of different subjects
    Science science("Science", "Ms.Bostic", studentNames, 5);

    string artStudents[] = {"Devon", "Micah", "Jacob", "Ayden", "Mark", "Conner"};
    Art art("Art", "Ms.Earnheart", artStudents, 6);

    string mathStudents[] = {"Jason", "Olivia", "Liam", "KJ", "Tae", "Troy", "Caleb"};
    Math math("Math", "Ms.Cox", mathStudents, 7);

    string historyStudents[] = {"Mike", "Sage", "Keaton", "Noah", "Bricks", "Enzo", "Devon", "Josh"};
    History history("History", "Mr.Beckett", historyStudents, 8);

    cout << "Welcome to North West high school\n";

    // Display information about each subject
    cout << "Your 1st period is " << science.className << " and the teacher is " << science.teacher << "\n";
    cout << "There are " << science.numStudents << " students: ";
    for (int i = 0; i < science.numStudents; i++) {
        cout << science.students[i];
        if (i < science.numStudents - 1) {
            cout << ", ";
        }
    }
    cout << "\n";
    cout << "\n";

    cout << "Your 2nd period is " << art.className << " and the teacher is " << art.teacher << "\n";
    cout << "There are " << art.numStudents << " students: ";
    for (int i = 0; i < art.numStudents; i++) {
        cout << art.students[i];
        if (i < art.numStudents - 1) {
            cout << ", ";
        }
    }
    cout << "\n";
    cout << "\n";

    cout << "Your 3rd period is " << math.className << " and the teacher is " << math.teacher << "\n";
    cout << "There are " << math.numStudents << " students: ";
    for (int i = 0; i < math.numStudents; i++) {
        cout << math.students[i];
        if (i < math.numStudents - 1) {
            cout << ", ";
        }
    }
    cout << "\n";
    cout << "\n";

    cout << "Your 4th period is " << history.className << " and the teacher is " << history.teacher << "\n";
    cout << "There are " << history.numStudents << " students: ";
    for (int i = 0; i < history.numStudents; i++) {
        cout << history.students[i];
        if (i < history.numStudents - 1) {
            cout << ", ";
        }
    }

    return 0;
}
