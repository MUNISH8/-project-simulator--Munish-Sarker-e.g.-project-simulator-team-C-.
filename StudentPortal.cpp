
#include <iostream>
using namespace std;


struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char gender[10];   // T-07
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
        {1, "Samia", 20, 4.00, "Female"},
        {2, "Rahim", 21, 3.75, "Male"},
        {3, "Karim", 22, 3.50, "Male"}
    };

    displayStudents(students, 3);

    return 0;
}

