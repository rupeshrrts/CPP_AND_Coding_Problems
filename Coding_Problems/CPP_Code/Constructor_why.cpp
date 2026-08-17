
// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
// };

// int main()
// {
//     complex c1;
//     c1.real = 2;
//     c1.imag = 3;
//     // cout << c1 << endl; // cant do bcz c1 is userdefined type complex nto premitve

//     ;
// }

// // to rediuce error

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     complex c1;
//     c1.real = 2;
//     c1.imag = 3;
//     // cout << c1 << endl; // cant do bcz c1 is userdefined type complex nto premitve
//     c1.printDetails();
//     ;
// }

// // also set values by function

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     void setValues() // set default values to 0 for real and imaginary part
//     {
//         real = 0;
//         imag = 0;
//     }
// };

// int main()
// {
//     complex c1, c2;
//     c1.real = 2;
//     c1.imag = 3;
//     c2.setValues(); // set default values to 0 for real and imaginary part
//     // cout << c1 << endl; // cant do bcz c1 is userdefined type complex nto premitve
//     c1.printDetails();
//     c2.printDetails();
// }

// // also set values by function

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     void setValues() // set default values to 0 for real and imaginary part
//     {
//         real = 0;
//         imag = 0;
//     }
//     void setValues(int a, int b) // set the values for real and imaginary part by passing arguments
//     {
//         real = a;
//         imag = b;
//     }
// };

// int main()
// {
//     complex c1, c2, c3;
//     c1.real = 2;
//     c1.imag = 3;
//     c2.setValues();
//     c3.setValues(6, 7);
//     // cout << c1 << endl; // cant do bcz c1 is userdefined type complex nto premitve
//     c1.printDetails();
//     c2.printDetails();
//     c3.printDetails();
// }

// // To set the value automatically without calling the function by using constructor

// // also set values by function

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     complex() // set default values to 0 for real and imaginary part
//     {
//         real = 0;
//         imag = 0;
//         cout << "Default constructor called" << endl;
//     }
//     complex(int a, int b) // set the values for real and imaginary part by passing arguments
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }
// };

// int main()
// {
//     complex c1, c2, c3(2, 3);

// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     // complex() // set default values to 0 for real and imaginary part
//     // {
//     //     real = 0;
//     //     imag = 0;
//     //     cout << "Default constructor called" << endl;
//     // }
//     complex(int a, int b) // set the values for real and imaginary part by passing arguments
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }
// };

// int main()
// {
//     complex c3(2, 3);
//     complex c4 = c3; // copy constructor called
//     // c1.printDetails();
//     // c2.printDetails();
//     c3.printDetails();
//     c4.printDetails();
// }

// // copy constructor concept
// #include <iostream>
// #include <string.h>
// using namespace std;
// class complex
// {
// public:
//     int real;
//     int imag;
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
//     complex() // set default values to 0 for real and imaginary part
//     {
//         real = 0;
//         imag = 0;
//         cout << "Default constructor called" << endl;
//     }
//     complex(int a, int b) // set the values for real and imaginary part by passing arguments
//     {
//         real = a;
//         imag = b;
//         cout << "Parameterized constructor called" << endl;
//     }

//     complex(complex x) // copy constructor cant do like this bcz it will call copy constructor again and again and it will cause infinite loop so we have to pass the object by reference
//     {

//         cout << "Copy constructor called" << endl;
//     }
// };

// int main()
// {
//     complex c3(2, 3);
//     complex c4 = c3; // copy constructor called
//     c3.printDetails();
//     c4.printDetails();
// }

// // copy constructor concept
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
//     complex(int a)
//     {
//         real = imag = a;
//         cout << "Parameterized constructor called" << endl;
//     }

//     complex(complex &x)
//     {
//         real = x.real;
//         imag = x.imag;
//         cout << "Hmara wala Copy constructor called" << endl;
//     }
//     void printDetails()
//     {
//         cout << real << " " << "+" << " " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     complex c1;      // default constructor called
//     complex c4 = c1; // copy constructor called
//     c1.printDetails();
//     c4.printDetails();
// }

// // in this code if we remove 0 argument constructor  then will be error.
// // complex()
// //     {
// //         real = imag = 0;
// //         cout << "Default constructor called" << endl;
// //     }
