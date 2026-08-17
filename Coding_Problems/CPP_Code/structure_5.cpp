
// // Function overloading
// #include <iostream>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };
// int fun(float a) // type conversion  char to int to float
// {
//     cout << a << " ";
//     return 1;
// }
// void fun(student s)
// {
//     cout << "Pankaj" << endl;
// }

// int main()
// {
//     char c = 'A';
//     fun(c);
//     return 0;
// }

// // Function overloading
// #include <iostream>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };
// int fun(float a) // type conversion  char to int to float
// {
//     cout << a << " ";
//     return 1;
// }
// void fun(double s) // type conversion  char to int to float to double
// // so here both calling is possible but fun(double s) is more preffered than fun(float a) because of type conversion sor error bcz calloing dono ko jaegi
// {
//     cout << "Pankaj" << endl;
// }

// int main()
// {
//     char c = 'A';
//     fun(c); // call to float and double dunction also
//     return 0;
// }

// // Function overloading
// #include <iostream>
// #include <string.h>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };

// int main()
// {
//     struct student s1 = {20, "Pankaj", 85.5};
//     struct student s2;
//     s2.age = 20;
//     strcpy(s2.name, "Pankaj");
//     s2.marks = 85.5;
//     cout << "Enter the age, name and  marks " << endl;
//     struct student s3;
//     cin >> s3.age;
//     cin.ignore(); // to ignore the newline character after reading age
//     cin.getline(s3.name, 20);
//     cin >> s3.marks;
//     cout << "Student 1: Age = " << s3.age << ", Name = " << s3.name << ", Marks = " << s3.marks << endl;

// }

// // Function overloading
// #include <iostream>
// #include <string.h>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };

// void printDetails(struct student s)
// {
//     cout << "Student: Age = " << s.age << ", Name = " << s.name << ", Marks = " << s.marks << endl;
// }

// int main()
// {
//     struct student s1 = {223, "rupesh", 80.3};
//     struct student s2;
//     s2.age = 20;
//     strcpy(s2.name, "Pankaj");
//     s2.marks = 85.5;
//     cout << "Enter the age, name and  marks " << endl;
//     struct student s3;
//     cin >> s3.age;
//     cin.ignore(); // to ignore the newline character after reading age
//     cin.getline(s3.name, 20);
//     cin >> s3.marks;
//     printDetails(s1);
//     printDetails(s2);
//     printDetails(s3);

//     return 0;
// }

// // Function overloading
// #include <iostream>
// #include <string.h>
// using namespace std;
// struct student
// {
//     int age;
//     char name[20];
//     float marks;
// };

// void printDetails(struct student s)
// {
//     cout << "Student: Age = " << s.age << ", Name = " << s.name << ", Marks = " << s.marks << endl;
// }

// struct student getDetails()
// {
//     struct student s;
//     cout << "Enter the age, name and  marks " << endl;
//     cin >> s.age;
//     cin.ignore(); // to ignore the newline character after reading age
//     cin.getline(s.name, 20);
//     cin >> s.marks;
//     return s;
// }

// int main()
// {
//     struct student s1 = {223, "rupesh", 80.3};
//     struct student s2;
//     s2.age = 20;
//     strcpy(s2.name, "Pankaj");
//     s2.marks = 85.5;
//     struct student s3 = getDetails(); // struct student is datatype here s3 is var of datatype.
//     printDetails(s1);
//     printDetails(s2);
//     printDetails(s3);
//     return 0;
// }

// // Function overloading
// #include <iostream>
// #include <string.h>
// using namespace std;
// struct student // in declatration struct is mendetory
// {
//     int age;
//     char name[20];
//     float marks;
// };

// void printDetails( student s)
// {
//     cout << "Student: Age = " << s.age << ", Name = " << s.name << ", Marks = " << s.marks << endl;
// }

// struct student getDetails()
// {
//     student s; // struct in optional here in c++ 14 and later versions but in c++ 11 and earlier versions we have to write struct student s;
//     cout << "Enter the age, name and  marks " << endl;
//     cin >> s.age;
//     cin.ignore(); // to ignore the newline character after reading age
//     cin.getline(s.name, 20);
//     cin >> s.marks;
//     return s;
// }

// int main()
// {
//     student s1 = {223, "rupesh", 80.3};
//     student s2;
//     s2.age = 20;
//     strcpy(s2.name, "Pankaj");
//     s2.marks = 85.5;
//     student s3 = getDetails(); // struct student is datatype here s3 is var of datatype.
//     printDetails(s1);
//     printDetails(s2);
//     printDetails(s3);
//     return 0;
// }

// // Function overloading
// #include <iostream>
// #include <string.h>
// using namespace std;
// struct student // in declatration struct is mendetory
// {
//     int age;
//     char name[20];
//     float marks;
// };

// void printDetails(student s)
// {
//     cout << "Student: Age = " << s.age << ", Name = " << s.name << ", Marks = " << s.marks << endl;
// }

// student getDetails()
// {
//     student s; // struct in optional here in c++ 14 and later versions but in c++ 11 and earlier versions we have to write struct student s;
//     cout << "Enter the age, name and  marks " << endl;
//     cin >> s.age;
//     cin.ignore(); // to ignore the newline character after reading age
//     cin.getline(s.name, 20);
//     cin >> s.marks;
//     return s;
// }

// int main()
// {
//     student s1 = {223, "rupesh", 80.3};
//     student s2;
//     s2.age = 20;
//     strcpy(s2.name, "Pankaj");
//     s2.marks = 85.5;
//     student s3 = getDetails(); // struct student is datatype here s3 is var of datatype.
//     printDetails(s1);
//     printDetails(s2);
//     printDetails(s3);
//     return 0;
// }

// // Function overloading
// #include <iostream>
// #include <string.h>
// using namespace std;
// struct student // in declatration struct is mendetory
// {
//     int age;
//     char name[20];
//     float marks;

//     void printDetails()
//     {
//         cout << "Student: Age = " << age << ", Name = " << name << ", Marks = " << marks << endl;
//     }

//     void getDetails()
//     {
//         cout << "Enter the age, name and  marks " << endl;
//         cin >> age;
//         cin.ignore();
//         cin.getline(name, 20);
//         cin >> marks;
//     }
// };

// int main()
// {
//     student s1 = {223, "rupesh", 80.3};
//     student s2;
//     s2.age = 20;
//     strcpy(s2.name, "Pankaj");
//     s2.marks = 85.5;
//     student s3;
//     s3.getDetails();
//     s1.printDetails();
//     s2.printDetails();
//     s3.printDetails();
//     return 0;
// }

// structure with member veriable and functions
#include <iostream>
#include <string.h>
using namespace std;
struct student // in declatration struct is mendetory
{
private:
    int age;
    char name[20];
    float marks;

public:
    void printDetails()
    {
        cout << "Student: Age = " << age << ", Name = " << name << ", Marks = " << marks << endl;
    }

    void getDetails()
    {
        cout << "Enter the age, name and  marks " << endl;
        cin >> age;
        cin.ignore();
        cin.getline(name, 20);
        cin >> marks;
    }
};

int main()
{
    // student s1 = {223, "rupesh", 80.3};
    student s2;
    // s2.age = 20;
    // strcpy(s2.name, "Pankaj");
    // s2.marks = 85.5;
    student s3;
    s3.getDetails();
    // s1.printDetails();
    s2.printDetails();
    s3.printDetails();
    return 0;
}
