<<<<<<< HEAD
=======
#include <iostream>
using namespace std;

>>>>>>> 2f4fade4a0748e72e6f85cbe05e82478db559f68

struct Student
{
    int studentId;           //T-14 updated int id
    char studentName[150];  // Updated to 150 by rii
    int age;
    float cgpa;
    char gender[10];        // T-07
    char phone[25];         // T-05 updated to T-13
    char status[20];        // T-10
    char address[200];      //T-06 updated to T-12
    int creditHours;        //T-09
    char email[100];         //T-04
    int semester;            //T-08

};

<<<<<<< HEAD


=======
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
>>>>>>> 2f4fade4a0748e72e6f85cbe05e82478db559f68
