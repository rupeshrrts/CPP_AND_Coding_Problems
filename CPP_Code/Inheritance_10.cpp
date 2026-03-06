// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student
// {
// private:
//     char name[20];
//     int roll;

// protected:
//     void setname(char *str)
//     {
//         strcpy(name, str); // need to add string.h header file for this function
//     }
//     void setroll(int r)
//     {
//         roll = r;
//     }

// public:
//     char *getname()
//     {
//         return name;
//     }
//     int getroll()
//     {
//         return roll;
//     }
// };
// int main()
// {
//     Student s1;
//     // cout<<s1.name << endl; // invalid because name is private
//     s1.setname("Rupesh");
//     // cout << "Name: " << s1.getname() << endl;
//     // cout << "Roll: " << s1.getroll() << endl;
// }

// // to resolvce the above error we need inheritance.
// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student
// {
// private:
//     char name[20];
//     int roll;

// protected:
//     void setname(const char *str)
//     {
//         strcpy(name, str); // need to add string.h header file for this function
//     }
//     void setroll(int r)
//     {
//         roll = r;
//     }

// public:
//     char *getname()
//     {
//         return name;
//     }
//     int getroll()
//     {
//         return roll;
//     }
// };

// class physique : public Student
// {
// private:
//     int height, weight;

// protected:
//     void setheight(int h)
//     {
//         height = h;
//     }
//     void setweight(int w)
//     {
//         weight = w;
//     }

// public:
//     int getheight()
//     {
//         return height;
//     }
//     int getweight()
//     {
//         return weight;
//     }

//     void setdata(const char *naam, int r, int h, int w)
//     {
//         setname(naam); // due to protected
//         setroll(r);    // due to protected
//         weight = w;
//         height = h;
//     }
// };

// int main()
// {
//     physique s1;
//     s1.setdata("Rupesh", 101, 155, 70);
//     cout << "Name: " << s1.getname() << endl;
//     cout << "Roll: " << s1.getroll() << endl;
//     cout << "Height: " << s1.getheight() << "csm" << endl;
//     cout << "Weight: " << s1.getweight() << "kgs" << endl;
// }

// // use  of access specifier in inheritance
// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student
// {
// private:
//     char name[20];
//     int roll;

// protected:
//     void setname(const char *str)
//     {
//         strcpy(name, str); // need to add string.h header file for this function
//     }
//     void setroll(int r)
//     {
//         roll = r;
//     }

// public:
//     char *getname()
//     {
//         return name;
//     }
//     int getroll()
//     {
//         return roll;
//     }
// };

// class physique : private Student
// {
// private:
//     int height, weight;

// protected:
//     void setheight(int h)
//     {
//         height = h;
//     }
//     void setweight(int w)
//     {
//         weight = w;
//     }

// public:
//     int getheight()
//     {
//         return height;
//     }
//     int getweight()
//     {
//         return weight;
//     }

//     char *getparentname()
//     {
//         return getname(); // due to private inheritance we cannot access the base class members in derived class but we can access them through public member functions of base class
//     }
//     int getparentroll()
//     {
//         return getroll(); // due to private inheritance we cannot access the base class members in derived class but we can access them through public member functions of base class
//     }
//     void setdata(const char *naam, int r, int h, int w)
//     {
//         setname(naam); // due to protected
//         setroll(r);    // due to protected
//         weight = w;
//         height = h;
//     }
// };

// int main()
// {
//     physique s1;
//     s1.setdata("Rupesh", 101, 155, 70);
//     cout << "Name: " << s1.getparentname() << endl;
//     cout << "Roll: " << s1.getparentroll() << endl;
//     cout << "Height: " << s1.getheight() << "csm" << endl;
//     cout << "Weight: " << s1.getweight() << "kgs" << endl;
// }

// //// some public private protected concepts
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     float bonus;
// };
// class B
// {
// public:
//     float salary;
// };
// class D : protected A, private B
// {
// private:   // salary of class B yaha avl hai
// protected: // bonus of class A yaha avl hai
// public:
//     void showSalary()
//     {
//         cout << (salary + bonus) << endl;
//     }
// };

// int main()
// {
//     D obj;
//     obj.showSalary();
// }

// //// some  private  concepts
// #include <iostream>
// using namespace std;
// class A
// {
// private:
//     float bonus;

// public:
//     float getBonus()
//     {
//         return bonus;
//     }

// };
// class B
// {
// private:
//     float salary;

// public:
//     float getSalary()
//     {
//         return salary;
//     }

// };
// class D : protected A, private B
// {
// private:   // salary of class B yaha avl hai
// protected: // bonus of class A yaha avl hai
// public:
//     void showSalary()
//     {
//         cout << (getSalary() + getBonus()) << endl;
//     }
// };

// int main()
// {
//     D obj;
//     obj.showSalary();
// }

// //// some  private  concepts
// #include <iostream>
// using namespace std;
// class A
// {
// private:
//     float bonus;

// public:
//     float getBonus()
//     {
//         return bonus;
//     }
//     A(float b = 0.0) // using default argument concep
//     {
//         bonus = b;
//     }
// };
// class B
// {
// private:
//     float salary;

// public:
//     float getSalary()
//     {
//         return salary;
//     }
//     B(float s = 0.0) // using default argument concept
//     {
//         salary = s;
//     }
// };
// class D : protected A, private B
// {
// private:   // salary of class B yaha avl hai
// protected: // bonus of class A yaha avl hai
// public:
//     void showSalary()
//     {
//         cout << (getSalary() + getBonus()) << endl;
//     }
//     D(float s, float b) : A(b), B(s)
//     {
//     }
// };

// int main()
// {
//     D obj(22000, 5000);
//     obj.showSalary();
// }

// //// some imprtant concepts
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
//         cout << "derived class" << endl;
//     }
// };

// int main()
// {
//     A a;
//     B b;
//     a.fun(); // class A wala function called
//     b.fun(); // class B wala  function called
// }

// //// some imprtant concepts
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
// };

// int main()
// {
//     A a;
//     B b;
//     a.fun(); // class A wala function called
//     b.fun(); // class A wala  function called
// }
