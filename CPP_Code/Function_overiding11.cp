
// //// some imprtant concepts of overriding
// #include <iostream>
// using namespace std;
// class A
// {

// public:
//     void fun()
//     {
//         cout << "Base class" << endl;
//     }
// };
// class B : public A
// {
// public:
//     void fun()
//     {
//         cout << "Derived" << endl;
//     }

// int main()
// {
//     A a;
//     B b;
//     a.fun(); // class A wala function called
//     b.fun(); // class B wala  function called
// }

// //// some imprtant concepts of overriding
// #include <iostream>
// using namespace std;
// class A
// {

// public:
//     void fun()
//     {
//         cout << "Base class" << endl;
//     }
// };
// class B : public A
// {
// public:
//
// };

// int main()
// {
//     A a;
//     B b;
//     a.fun(); // class A wala function called
//     b.fun(); // class A wala  function called
// }

// //// some imprtant concepts of overriding
// #include <iostream>
// using namespace std;
// class A
// {

// public:
//     void fun()
//     {
//         cout << "Base class" << endl;
//     }
// };
// class B : public A
// {
// public:
//     void fun()
//     {
//         cout << "Derived" << endl;
//     }
//     void fun(int x)
//     {
//         cout << x << endl;
//     }
//     void fun(double y)
//     {
//         cout << y << endl;
//     }
// };

// int main()
// {
//     A a;
//     B b;
//     a.fun(); // class A wala function called
//     b.fun(); // class A wala  function called
// }

// //// some imprtant concepts of overriding
// #include <iostream>
// using namespace std;
// class A
// {

// public:
//     void fun()
//     {
//         cout << "Base class" << endl;
//     }
// };
// class B : public A
// {
// public:
//     // void fun()     ///// error bcs there is 2 function present in derived class so it wont be look into base  class
//     // {
//     //     cout << "Derived" << endl;
//     // }
//     void fun(int x)
//     {
//         cout << x << endl;
//     }
//     void fun(double y)
//     {
//         cout << y << endl;
//     }
// };

// int main()
// {
//     A a;
//     B b;
//     a.fun(); // class A wala function called
//     b.fun(); // class A wala  function called
// }

// //// some imprtant concepts of overriding
// #include <iostream>
// using namespace std;
// class Base
// {

// public:
//     void f()
//     {
//         cout << "Base class" << endl;
//     }
//     void g()
//     {
//         cout << "1" << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void f()
//     {
//         cout << "Derived Class" << endl;
//     }
//     void g()
//     {
//         cout << "2" << endl;
//     }
// };

// int main()
// {
//     Base b;
//     Derived d;
//     Base *pb = &b;
//     Base *pd = &d;
//     b.f(); // early binding ===> Base
//     b.g(); // 1
//     d.f(); // derived
//     d.g(); // 2
// }

//// some imprtant concepts of overriding
#include <iostream>
using namespace std;
class Base
{

public:
    void f()
    {
        cout << "Base class" << endl;
    }
    void g()
    {
        cout << "1" << endl;
    }
};
class Derived : public Base
{
public:
    void f()
    {
        cout << "Derived Class" << endl;
    }
    void g()
    {
        cout << "2" << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    Base *pb = &b;
    Base *pd = &d;
    pb->f(); // Base // early binding abhi v hai bcz compiler type of pointer dekhega so dono pointer Base c    lass ke hai so dtaa v base class ka v print hoga
    pb->g(); // 1
    pd->f(); // Base
    pd->g(); // 1
}
