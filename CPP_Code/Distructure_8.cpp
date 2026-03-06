

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// private:
//     int real;
//     int imag;

// public:
//     complex()
//     {
//         real = imag = 0;
//         cout << "Default constructor called" << endl;
//     }
//     complex(int a, int b)
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }
//     ~complex()
//     {
//         cout << "achha chalta hu (Destructor called)" << endl;
//     }
//     void print()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     complex c1, c2(2, 3), c3; // default constructor called
//     c1.print();
//     c2.print();
//     c3.print();
// }
// // jitna object utna barr distructure called

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// private:
//     int real;
//     int imag;

// public:
//     complex()
//     {
//         real = imag = 0;
//         cout << "Default constructor called" << endl;
//     }
//     complex(int a, int b)
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }
//     ~complex()
//     {
//         cout << "achha chalta hu (Destructor called)" << endl;
//     }
//     void print()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }
// };

// int main()
// {
//     complex c1, c2(2, 3), c3, c4; // default constructor called
//     c1.print();
//     c2.print();
//     c3.setValues(4, 5);
//     c3.print();
// }

// // Dynamic objects are created using the new operator and destroyed using the delete operator. When a dynamic object is created, the constructor is called to initialize the object, and when it is destroyed, the destructor is called to clean up any resources used by the object.
// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// private:
//     int real;
//     int imag;

// public:
//     complex()
//     {
//         real = imag = 0;
//         cout << "Default constructor called" << endl;
//     }
//     complex(int a, int b)
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }
//     ~complex()
//     {
//         cout << "achha chalta hu (Destructor called)" << endl;
//     }
//     void print()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }
// };

// int main()
// {
//     complex *ptr = new complex;
//     // ptr.real = 3; // error bcz cant acces private members using . pointer
//     // ptr->real = 3; // error also
//     ptr->setValues(3, 4);
//     ptr->print();
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// private:
//     int real;
//     int imag;

// public:
//     complex()
//     {
//         real = imag = 0;
//         cout << "Default constructor called" << endl;
//     }
//     complex(int a, int b)
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }

//     void print()
//     {
//         cout << this << endl;
//     }
//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }
//     ~complex()
//     {
//         cout << "achha chalta hu (Destructor called)" << endl;
//     }
// };

// int main()
// {
//     // complex *ptr = new complex;
//     // // ptr.real = 3; // error bcz cant acces private members using . pointer
//     // // ptr->real = 3; // error also
//     // ptr->setValues(3, 4);
//     // ptr->print();

//     complex c1;
//     cout << &c1 << endl;
//     c1.print();
// }
