#include <iostream>
using namespace std;


struct Student
{
    int id;
    char studentName[100];  // Updated
    int age;
    float cgpa;
    char gender[10];        // T-07
    char phone[20];         // T-05
    char status[20];        // T-10
    char address[100];      //T-06
    int creditHours;        //T-09


};

void displayStudents(Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << students[i].age << endl;
    }
}

int main()
{
    Student students[3] =
    {
        {1, "Samia", 20, 4.00, "Female", "01700000000", "Active"},
        {2, "Rahim", 21, 3.75, "Male", "01800000000", "Inactive"},
        {3, "Karim", 22, 3.50, "Male", "01900000000", "Graduated"}
    };

    displayStudents(students, 3);

    return 0;
}