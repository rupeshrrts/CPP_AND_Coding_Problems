
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
//     void print()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     void setValues(int a, int b)
//     {
//         real = a;
//         imag = b;
//     }
//     friend complex operator+(complex, complex);
// };

// complex operator+(complex c1, complex c2)
// {
//     complex temp;
//     temp.real = c1.real + c2.real;
//     temp.imag = c1.imag + c2.imag;
//     cout << " Friend Function Addition performed" << endl;
//     return temp;
// }

// int main()
// {

//     complex c1, c2, c3, c4;
//     c1.setValues(5, 6);
//     c1.print();
//     c2.setValues(2, 3);
//     c2.print();

//     c3 = c1 + c2;
//     c3.print();
//     c4 = operator+(c1, c2); //  or c3= c1+c2;// Now this works because we overloaded the + operator
//     c4.print();
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
    void print()
    {
        cout << real << " " << "+" << " " << imag << "i" << endl;
    }
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    friend complex operator+(complex, complex);
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    cout << " Friend Function Addition performed" << endl;
    return temp;
}

int main()
{

    complex c1, c2, c3, c4;
    c1.setValues(5, 6);
    c1.print();
    c2.setValues(2, 3);
    c2.print();

    c3 = c1 + c2;
    c3.print();
    c4 = operator+(c1, c2); //  or c3= c1+c2;// Now this works because we overloaded the + operator
    c4.print();
}
