```cpp
#include <iostream>
using namespace std;


struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char gender[10];    // T-07
    char phone[20];     // T-05
    char address[100];  // T-06
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
        {1, "Samia", 20, 4.00, "Female", "01711111111", "Dhaka"},
        {2, "Rahim", 21, 3.75, "Male", "01822222222", "Chittagong"},
        {3, "Karim", 22, 3.50, "Male", "01933333333", "Rajshahi"}
    };

    displayStudents(students, 3);

    return 0;
}
```


