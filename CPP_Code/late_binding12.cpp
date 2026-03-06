
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

// int main() //// yaha sara data base class ka hi print hoga bcz early binding means pointer me address kis class ka jhai usper depend krta hai then us class ka hi function call hoga
// {
//     Base b;
//     Derived d;
//     Base *pb = &b;
//     Base *pd = &d;
//     pb->f(); // Base // early binding abhi v hai bcz compiler type of pointer dekhega so dono pointer Base class ke hai so data v base class ka v print hoga
//     pb->g(); // 1
//     pd->f(); // Base
//     pd->g(); // 1
// }

// //// Late Binding amd virtual keyword
// #include <iostream>
// using namespace std;
// class Base
// {

// public:
//     virtual void f()
//     {
//         cout << "Base class ka f()" << endl;
//     }
//     void g()
//     {
//         cout << "Base class ka g()" << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void f()
//     {
//         cout << "Derived Class Ka f()" << endl;
//     }
//     void g()
//     {
//         cout << "Base class ka g()" << endl;
//     }
// };

// int main()
// {
//     Base b;
//     Derived d;
//     Base *pb = &b;
//     Base *pd = &d;
//     pb->f(); // EB==>Class A ===>LB===>address of class A object ===> data v Base Ka print hoga
//     pb->g(); // EB==> class A===>g() and no virtual so ===> base ka g()
//     pd->f(); //// EB==> class A===>there is virtual ==> so LB==>address of class B===> Derived ka f()
//     pd->g(); // EB==> class A ===> no virtual keywork so will see object type liss class ka hai==> class A so ==> Base ka g() will execute
// }

// //// Late Binding amd virtual keyword
// #include <iostream>
// using namespace std;
// class A
// {

// public:
//     void f()
//     {
//         cout << "Base class ka f()" << endl;
//     }
//     void g()
//     {
//         cout << "Base class ka g()" << endl;
//     }
//     void h()
//     {
//         cout << "Base Class Ka h()" << endl;
//     }
//     void i()
//     {
//         cout << "Base class ka i()" << endl;
//     }
// };
// class B : public A
// {
// public:
//     void f()
//     {
//         cout << "Derived Class Ka f()" << endl;
//     }
//     void g()
//     {
//         cout << "Derived class ka g()" << endl;
//     }
//     void j()
//     {
//         cout << "Derived class ka j()" << endl;
//     }
// };

// int main()
// {
//     A *ptr;
//     ptr = new A;
//     ptr->f();
//     ptr->g();
//     ptr->h();
//     ptr->i();
// }

//// Late Binding amd virtual keyword
#include <iostream>
using namespace std;
class A
{

public:
    void f()
    {
        cout << "Base class ka f()" << endl;
    }
    virtual void g()
    {
        cout << "Base class ka g()" << endl;
    }
    virtual void h()
    {
        cout << "Base Class Ka h()" << endl;
    }
    void i()
    {
        cout << "Base class ka i()" << endl;
    }
};
class B : public A
{
public:
    void f()
    {
        cout << "Derived Class Ka f()" << endl;
    }
    void g()
    {
        cout << "Derived class ka g()" << endl;
    }
    void j()
    {
        cout << "Derived class ka j()" << endl;
    }
};

int main()
{
    // A *ptr;
    // ptr = new A;
    // ptr->f(); // EB ==> Class A==> no vertual ==>f()==> Base ka f()
    // ptr->g(); // EB ==> Class A==>virtual ==> So LB (so ab hum pointer ke under ka address(content) dekhenge wo v class A ka hi hai )==> ==> Base ka g()
    // ptr->h(); // EB==>Class A ==> LB==> pointer me address Class A ka object hai ==> base ka h()
    // ptr->i(); // EB ==> Class A ==> base ka i
    // ptr->j(); // EB==>class A ==> no such function ======> class A me esa koi function hji nhi hai so =====> error
    // return 0;

    A *ptr;
    ptr = new B;
    // ptr->f();
    // ptr->g();
    // ptr->h();
    // ptr->i();
    // ptr->j(); // EB==>class A =====> error
    return 0;
}