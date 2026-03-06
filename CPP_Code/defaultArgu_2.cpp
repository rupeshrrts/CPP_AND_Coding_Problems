
// // Default Argument   with error code
// #include <iostream>
// using namespace std;
// int add(int, int, int);
// int main()
// {
//     int x = 10, y = 20;
//     cout << add(x, y);       // error
//     cout << add(10, 20, 30); // most
// }

// int add(int a, int b, int c)
// {
//     return a + b + c;
// }

//// #include <iostream>
// using namespace std;
// int add(int, int, int = 0); // 3rd argument is default
// int main()
// {
//     int x = 10, y = 20;
//     cout << add(x, y);       // 3rd arg =0 10+20
//     cout << add(10, 20, 30); // most  10+20+30
// }

// int add(int a, int b, int c)
// {
//     return a + b + c;
// }

// //// with mention any default value
// #include <iostream>
// using namespace std;
// int add(int, int, int = 6); // 3rd argument is default
// int main()
// {
//     int x = 10, y = 20;
//     cout << add(x, y) << endl; // 3rd arg =0 10+20
//     cout << add(10, 20, 30);   // most  10+20+30
// }

// int add(int a, int b, int c)
// {
//     return a + b + c;
// }

// // with mention any default value
// #include <iostream>
// using namespace std;
// int add(int, int = 0, int = 6); // 3rd argument is default
// int main()
// {
//     cout << add(10) << endl; // 10+0+6
//     cout << add(10, 20) << endl; // 3rd arg =0 10+20+6
//     cout << add(10, 20, 30);     // most  10+20+30
// }

// int add(int a, int b, int c)
// {
//     return a + b + c;
// }

// // with function definition parameter default value
// #include <iostream>
// using namespace std;
// int add(int, int, int); // decelaration
// int main()
// {
//     cout << add(10) << endl;     // 10+0+6
//     cout << add(10, 20) << endl; // 3rd arg =0 10+20+6
//     cout << add(10, 20, 30);     // most  10+20+30
// }

// int add(int a, int b = 0, int c = 0)   ///// error
// {
//     return a + b + c;
// }

// Solution  of above code  is replace is function declearation to function defition

// // with function definition parameter default value
// #include <iostream>
// using namespace std;

// int add(int a, int b = 0, int c = 0) ///// error
// {
//     return a + b + c;
// }
// int main()
// {
//     cout << add(10) << endl;     // 10+0+6
//     cout << add(10, 20) << endl; // 3rd arg =0 10+20+6
//     cout << add(10, 20, 30);     // most  10+20+30
// }
