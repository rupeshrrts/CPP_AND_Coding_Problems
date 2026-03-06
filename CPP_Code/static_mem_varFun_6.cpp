
// #include <iostream>
// #include <string.h>
// using namespace std;
// class product // in declatration struct is mendetory
// {
// public:
//     int price = 7;
//     char name[20];
//     static int s;
// };

// int main()
// {

//     product s1;

//     cout << s1.price;
//     return 0;
// }

// // static member variable is shared by all the objects of the class and it is not associated with any object. It is declared using the static keyword and it can be accessed using the class name or an object of the class. Static member variables are initialized only once and they retain their value throughout the program execution. They are commonly used to store values that are common to all objects of a class, such as a count of the number of objects created or a constant value that is shared among all objects.
// #include <iostream>
// #include <string.h>
// using namespace std;
// class product // in declatration struct is mendetory
// {
// public:
//     int price = 7;
//     char name[20];
//     static int s;
// };
// int product ::s = 20; // static member variable must be defined outside the class using scope resulation operator ::
// int main()
// {
//     product s1;
//     cout << s1.price << endl;
//     s1.s = 20; // error bcs s can be decelare in any class so we need to define the class also using scope resulation operator ::
//     cout << s1.s;// but static hai so no need acess using object we can access using class name also.        syntex true byt logically wrong
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class product // in declatration struct is mendetory
// {
// private:
//     int price = 7;
//     char name[20];
//     static int s;
// };
// int product ::s = 20;
// int main()
// {
//     product s1;
//     cout << s1.price << endl;
//     s1.s = 20;
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class product // in declatration struct is mendetory
// {
// private:
//     int x, y;
//     static int s;

// public:
//     void printDetails() // to make it global we have to use scope resolution operator :: and class name student
//     {
//         cout << "x = " << x << ", y = " << y << endl;
//     }
// };

// int product ::s = 20;
// int main()
// {
//     product s1, s2;
//     s1.printDetails();
//     s2.printDetails();
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class product // in declatration struct is mendetory
// {
// private:
//     int x, y;
//     static int s;

// public:
//     void setValues(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void printDetails() // to make it global we have to use scope resolution operator :: and class name student
//     {
//         cout << "x = " << x << ", y = " << y << endl;
//     }
//     int getS()
//     {
//         return s;
//     }
// };

// int product ::s = 20;
// int main()
// {
//     product s1, s2, s3;
//     s1.setValues(10, 20);
//     s2.setValues(30, 40);
//     s1.printDetails();
//     s2.printDetails();
//     s3.printDetails(); // uninitialized values of x and y will be printed for s3
//     // cout << product::s; // accessing private static member variable using class name
//     cout << s1.getS();       // accessing private static member variable using public member function   but not good way so  need to acces by class name using scope resulation operator :: and class name student.
//     cout << product::getS(); // gets() is not static function.
// }

// #include <iostream>
// using namespace std;

// class product
// {
// private:
//     int x, y;
//     static int s;

// public:
//     void setValues(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     void printDetails()
//     {
//         cout << "x = " << x << ", y = " << y << endl;
//     }

//     static int getS() // static function
//     {
//         return s;
//     }
// };

// int product::s = 20;

// int main()
// {
//     product s1, s2, s3;

//     s1.setValues(10, 20);
//     s2.setValues(30, 40);

//     s1.printDetails();
//     s2.printDetails();
//     s3.printDetails(); // now safe

//     cout << product::getS(); // correct way

//     return 0;
// }
