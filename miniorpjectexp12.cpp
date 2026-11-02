#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getName()
    {
        return name;
    }

    float getMarks()
    {
        return marks;
    }
};

class Result : public Student
{
public:
    bool validMarks()
    {
        return marks >= 0 && marks <= 100;
    }

    void showResult()
    {
        display();

        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Result s1;
    int choice;
    bool entered = false;

    do
    {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Save Student to File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                s1.input();

                if (s1.validMarks())
                {
                    entered = true;
                    cout << "Student added successfully!\n";
                }
                else
                {
                    entered = false;
                    cout << "Invalid marks! Enter marks between 0 and 100.\n";
                }
                break;

            case 2:
                if (entered)
                {
                    s1.showResult();
                }
                else
                {
                    cout << "Please enter valid student details first.\n";
                }
                break;

            case 3:
                if (entered)
                {
                    ofstream file("student.txt");

                    if (file.is_open())
                    {
                        file << "Student Details\n";
                        file << "Roll Number: " << s1.getRollNo() << endl;
                        file << "Name: " << s1.getName() << endl;
                        file << "Marks: " << s1.getMarks() << endl;

                        file.close();
                        cout << "Student details saved to student.txt\n";
                    }
                    else
                    {
                        cout << "Unable to open file.\n";
                    }
                }
                else
                {
                    cout << "Please enter valid student details first.\n";
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}