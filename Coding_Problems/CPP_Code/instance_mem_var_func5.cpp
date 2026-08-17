
#include <iostream>
#include <string.h>
using namespace std;
class student // in declatration struct is mendetory
{
private:
    int age;
    char name[20];
    float marks;

public:
    void printDetails();
    void getDetails();
};
void student ::printDetails() // to make it global we have to use scope resolution operator :: and class name student
{
    cout << "Age = " << age << ", Name = " << name << ", Marks = " << marks << endl;
}

void student ::getDetails() // to make it global we have to use scope resolution operator :: and class name student

{
    cout << "Enter the age, name and  marks " << endl;
    cin >> age;
    cin.ignore();
    cin.getline(name, 20);
    cin >> marks;
}

int main()
{

    student s1, s2;
    s1.getDetails();
    s2.getDetails();

    s1.printDetails();
    s2.printDetails();
    return 0;
}
