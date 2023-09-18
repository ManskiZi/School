# School
This C++ program models a simple school scenario where subjects, teachers, and students are represented using classes and objects. Here's a breakdown of the code:

Subject Class:

Subject is a base class representing a subject.
It has member variables for the class name (className), teacher name (teacher), an array of student names (students), and the number of students (numStudents).
The constructor initializes these variables, dynamically allocates memory for the students array, and copies student names into it.
A destructor is provided to free the dynamically allocated memory.
Derived Classes:

There are four derived classes: Science, Art, Math, and History, representing specific subjects.
Each derived class calls the base class constructor to set up subject-specific information.
Main Function:

In the main() function, arrays of student names are created for each subject.
Instances of each subject class are created with appropriate subject names, teacher names, and student arrays.
Information about each subject is displayed, including the class name, teacher's name, and the list of students.
Output:

The program outputs information about each subject and its students, presenting a simulated school schedule for the user.
The code demonstrates object-oriented programming concepts such as inheritance, constructors, and destructors to model a school subject system. It provides a structured way to organize and display information about different subjects and their associated data.
