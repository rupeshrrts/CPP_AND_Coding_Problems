
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
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }

//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }
//     complex(complex &x)
//     {
//         real = x.real;
//         imag = x.imag;
//         cout << "Copy constructor called" << endl;
//     }
//     void add(complex t)
//     {
//         real = real + t.real;
//         imag = imag + t.imag;
//         cout << "Addition performed" << endl;
//     }
//     complex operator+(complex t)
//     {
//         complex temp;
//         temp.real = real + t.real;
//         temp.imag = imag + t.imag;
//         cout << "Addition performed" << endl;
//         return temp;
//     }
//
// };

// int main()
// {

//     complex c1, c2, c3, c4;
//     c1.setValues(3, 4);
//     c2.setValues(5, 6);
//     c1.print();
//     c2.print();
//     // c3=c1+c2;// error bcz + works on built in data types but not on user defined data types like class objects
//     c1.add(c2); // but still cant do c3  = c1+c2
//     c1.print();

//     c3 = c1 + c2; // Now this works because we overloaded the + operator
//     c3.print();

//     c3 = c1.operator+(c2); // Now this works because we overloaded the + operator
//     c3.print();

//     c1 + c2 + c3; // Now this works because we overloaded the + operator and type complex
//     c4.print();
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
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }

//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }

//     void add(complex t)
//     {
//         real = real + t.real;
//         imag = imag + t.imag;
//         cout << "Addition performed" << endl;
//     }
//     complex operator+(complex t)
//     {
//         complex temp;
//         temp.real = real + t.real;
//         temp.imag = imag + t.imag;
//         cout << "Addition performed" << endl;
//         return temp;
//     }
//     // void operator+(complex t)
//     // {
//     //     temp.real = real + t.real;
//     //     temp.imag = imag + t.imag;
//     //     cout << "Addition performed" << endl;
//     // }
// };

// int main()
// {

//     complex c1, c2, c3, c4;
//     c1.setValues(3, 4);
//     c2.setValues(5, 6);
//     c1.print();
//     c2.print();
//     // c3=c1+c2;// error bcz + works on built in data types but not on user defined data types like class objects
//     c1.add(c2); // but still cant do c3  = c1+c2
//     c1.print();

//     c3 = c1 + c2; // Now this works because we overloaded the + operator
//     c3.print();

//     c3 = c1.operator+(c2); // Now this works because we overloaded the + operator
//     c3.print();

//     // c4 = c1 + c2 + c3; // Now this works because we overloaded the + operator and type complex
//     // c4.print();
// }

// to perform c1*4 we have to overload the * operator for multiplying a complex number with an integer
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

//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }

//     complex operator+(int t)
//     {
//         complex temp;
//         temp.real = real * t;
//         temp.imag = imag * t;
//         cout << "multiply performed" << endl;
//         return temp;
//     }

//     void print()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
// };

// int main()
// {

//     complex c1, c2, c3, c4;
//     c1.setValues(3, 4);
//     c2.setValues(5, 6);
//     c1.print();
//     c2.print();

//     c3 = c1.operator+(3); // Now this works because we overloaded the + operator
//     c3.print();           //
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
//     // complex()
//     // {
//     //     real = imag = 0;
//     //     cout << "Default constructor called" << endl;
//     // }
//     // complex(int a, int b)
//     // {
//     //     real = a;
//     //     imag = b;
//     //     cout << "Parameterized constructor called" << endl;
//     // }

//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }

//     complex operator-(complex t)
//     {
//         complex temp;
//         temp.real = real - t.real;
//         temp.imag = imag - t.imag;
//         cout << "Subtraction performed" << endl;
//         return temp;
//     }

//     complex operator*(complex t)
//     {
//         complex temp;
//         temp.real = real * t.real;
//         temp.imag = imag * t.imag;
//         cout << "Multiplication performed" << endl;
//         return temp;
//     }

//     void operator*(int t)
//     {
//         real = real * t;
//         imag = imag * t;
//         cout << "complex with int Multiplication performed" << endl;
//     }
//     void print()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
// };

// int main()
// {

//     complex c1, c2, c3, c4;
//     c1.setValues(5, 6);
//     c2.setValues(2, 3);
//     c1.print();
//     c2.print();

//     // For subtraction
//     c3 = c1.operator-(c2); //  or c3= c1+c2;// Now this works because we overloaded the + operator
//     c3.print();

//     c4 = c1 - c2;
//     c4.print();

//     // For multiplication
//     c3 = c1.operator*(c2); //  or c3= c1+c2;// Now this works because we overloaded the + operator
//     c3.print();

//     c4 = c1 * c2;
//     c4.print();

//     // for multiplying complex number with an integer
//     c1.operator*(4); //  or c3= c1+c2;// Now this works because we overloaded the + operator
//     c1.print();

//     c1 * 4;
//     c1.print();
// }

// // All concepts in this code snappit
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
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }

//     complex operator+(complex t)
//     {
//         complex temp;
//         temp.real = real + t.real;
//         temp.imag = imag + t.imag;
//         cout << "Addition performed" << endl;
//         return temp;
//     }
//     complex operator-(complex t)
//     {
//         complex temp;
//         temp.real = real - t.real;
//         temp.imag = imag - t.imag;
//         cout << "Subtraction performed" << endl;
//         return temp;
//     }

//     // void operator*(int t) /// but cant ctore in complex type var.
//     // {
//     //     real = real * t;
//     //     imag = imag * t;
//     //     cout << "complex with int Multiplication performed" << endl;
//     // }

//     complex operator*(int t)
//     {
//         complex temp;
//         temp.real = real * t;
//         temp.imag = imag * t;
//         cout << "complex with int Multiplication performed" << endl;
//         return temp;
//     }

//     complex operator*(complex t)
//     {
//         complex temp;
//         temp.real = real * t.real - imag * t.imag;
//         temp.imag = imag * t.real + real * t.imag;
//         cout << "Multiplication performed" << endl;
//         return temp;
//     }
//     // bool operator!=(complex t)
//     // {
//     //     if (real != t.real || imag != t.imag)
//     //     {
//     //         return true;
//     //     }
//     //     else
//     //     {
//     //         return false;
//     //     }
//     // }

//     bool operator!=(complex t)
//     {
//         return ((real != t.real || imag != t.imag));
//     }

//     complex operator-() // uniary operator overloading
//     {
//         complex temp;
//         temp.real = real * -1;
//         temp.imag = imag * -1;
//         cout << "Unary minus operator performed" << endl;
//         return temp;
//     }

//     // void operator++()  // error c8 = ++c1; bcz wee pass here void c1 in c8 which is complex type
//     // {
//     //     real++;
//     //     imag++;
//     // }

//     complex operator++() // this dont modify original object but return a new object with modified values
//     {
//         complex temp;
//         temp.real = real + 1;
//         temp.imag = imag + 1;
//         cout << "Pre Increment operator performed" << endl;
//         return temp;
//     }

//     // complex operator++() // its modify original object and return modified object
//     // {

//     //     real = real + 1;
//     //     imag = imag + 1;
//     //     cout << "Pre Increment operator performed" << endl;
//     //     return *this;
//     // }
// };

// int main()
// {

//     complex c1, c2, c3, c4, c5, c6, c7, c8, c9;
//     c1.setValues(5, 6);
//     c1.print();
//     c2.setValues(2, 3);
//     c2.print();

// // for Addition
// c3 = c1 + c2; // c3 = c1.operator+(c2);
// c3.print();
// // for Subtraction
// c4 = c1 - c2; // c3 = c1.operator-(c2);
// c4.print();
// // for multiplying complex number with an integer
// c5 = c1.operator*(4);
// c5.print();

// // For multiplication complex with complex
// c6 = c1 * c2; // c7 = c1.operator*(c2);
// c6.print();

// // cout << "c1 and c2 are not equal: " << (c1 != c2 ? "true" : "false") << endl;

// if (c1 != c2)
// {
//     cout << "Not Same" << endl;
// }
// else
// {
//     cout << "Same" << endl;
// }

// c7 = -c1; // c7 = c1.operator-(); // for uniary operator overloading
// c7.print();

//     c8 = ++c1;
//     c8.print();
//     c1.print();

//     // int a = 5;
//     // ++(++a);
//     // cout << a << endl;

//     c9 = ++(++c2);
//     c9.print();
//     c2.print();
// }

// All concepts in this code snappit
#include <iostream>
#include <string.h>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    complex()
    {
        real = imag = 0;
        cout << "Default constructor called" << endl;
    }
    complex(int a, int b)
    {
        real = a;
        imag = b;
        cout << "Parameterized constructor called" << endl;
    }
    void print()
    {
        cout << real << " " << "+" << " " << imag << "i" << endl;
    }
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }

    complex operator+(complex t)
    {
        complex temp;
        temp.real = real + t.real;
        temp.imag = imag + t.imag;
        cout << "Addition performed" << endl;
        return temp;
    }
    complex operator-(complex t)
    {
        complex temp;
        temp.real = real - t.real;
        temp.imag = imag - t.imag;
        cout << "Subtraction performed" << endl;
        return temp;
    }

    // void operator*(int t) /// but cant ctore in complex type var.
    // {
    //     real = real * t;
    //     imag = imag * t;
    //     cout << "complex with int Multiplication performed" << endl;
    // }

    complex operator*(int t)
    {
        complex temp;
        temp.real = real * t;
        temp.imag = imag * t;
        cout << "complex with int Multiplication performed" << endl;
        return temp;
    }

    complex operator*(complex t)
    {
        complex temp;
        temp.real = real * t.real - imag * t.imag;
        temp.imag = imag * t.real + real * t.imag;
        cout << "Multiplication performed" << endl;
        return temp;
    }

    bool operator!=(complex t)
    {
        return ((real != t.real || imag != t.imag));
    }

    complex operator-() // uniary operator overloading
    {
        complex temp;
        temp.real = real * -1;
        temp.imag = imag * -1;
        cout << "Unary minus operator performed" << endl;
        return temp;
    }

    // complex operator++() // this dont modify original object but return a new object with modified values
    // {
    //     complex temp;
    //     temp.real = real + 1;
    //     temp.imag = imag + 1;
    //     cout << "Pre Increment operator performed" << endl;
    //     return temp;
    // }

    // complex operator++() // its modify original object and return modified object
    // {

    //     real = real + 1;
    //     imag = imag + 1;
    //     cout << "Pre Increment operator performed" << endl;
    //     return *this;
    // }

    complex &operator++() // complex& operator++() overloads pre-increment, modifies the original object, and returns its reference to support chaining and efficiency
    {
        real++;
        imag++;
        return *this;
    }
};

int main()
{

    complex c1, c2, c3, c4, c5, c6, c7, c8, c9;
    c1.setValues(5, 6);
    c1.print();
    c2.setValues(2, 3);
    c2.print();

    // c8 = ++c1;
    // c8.print();
    // c1.print();

    c9 = ++(++(++(++c2)));
    c9.print();
    c2.print();
}
