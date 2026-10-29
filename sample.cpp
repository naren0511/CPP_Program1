
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    int r;
    string n;

    cout << "Enter your Roll Number: ";
    cin >> r;

    cout << "Enter your Name: ";
    cin >> n;

    Student s1(r, n);

    s1.display();

    return 0;
}
